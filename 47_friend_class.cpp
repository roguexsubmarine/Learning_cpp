#include <iostream>

class Engine{
    private:
        int rpm{};
    public:
        Engine(int x):
            rpm{x}
        {}
        
        friend class Gear;      // friend declaration
};

class Gear{
    private:
        int current_gear{};
    public:
        Gear(int y):
            current_gear{y}
        {}
        
        void display_gear(){
            std::cout << "Current gear : " << current_gear << std::endl; 
        }
        
        //accessing private var of another class
        void display_rpm (const Engine& e){
            std::cout << "Engine rpm   : " << e.rpm << std::endl;
        }
};


int main(){
    
    Engine e1{5000};
    Gear g1{6};
    
    g1.display_gear();      //prints 6          //private var of own class object
    g1.display_rpm(e1);     //prints 5000       //private var of another class object

    return 0;
}
