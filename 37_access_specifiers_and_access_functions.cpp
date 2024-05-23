//access specifiers
//PUBLIC
//PRIVATE (Default)
//PROTECTED

//access functions
//Getters   - (accessors)
//Setters   - (mutators)

class Circle{
private:
    int radius{1};

public:
    //Getter
    int get_radius(){
        return radius;
    }
    
    //Setter
    void set_radius(int r){
        radius = r;
        return;
    }
};


#include <iostream>
int main(){

    Circle c{};
    
    //Normal access -> not possible
    //std::cout << "Normal accessing : " << c.radius << std::endl;

    std::cout << "Default radius : " << c.get_radius() << std::endl;
    c.set_radius(5);
    std::cout << "After   radius : " << c.get_radius() << std::endl;
    

        

    return 0;
}
