#include <iostream>

class Account{
    private:
        int score{};
    
    public:
        Account(int num)
        :score{num}
        {
            std::cout << "Account created." << std::endl;
        }
        
        friend void print(const Account& acc);
};

void print(const Account& acc){
    std::cout << "Score : " << acc.score << std::endl;
}


int main(){

    Account a1{10};
    print(a1);

    return 0;
}
