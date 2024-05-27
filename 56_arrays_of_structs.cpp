#include <iostream>
#include <array>
using namespace std;

struct House{
    int num;
    int stories;
    int rooms;
};

void print_house(const array<House, 3>& arr){
    for(int i{0}; i < 3; ++i){
        cout << "House id: " << arr[i].num << ", stories: " << arr[i].stories << ", rooms: " << arr[i].rooms << endl;
    }
    cout << '\n';
    return;
}

int main(){
    
    //normal initialization
    array<House, 3>houses{};

    houses[0] = {13, 4, 6};
    houses[1] = {10, 4, 2};
    houses[2] = {30, 5, 3};

    //direct initialization
    array<House, 3> another_house{
        House{2, 4, 5},
        House{4, 2, 7},
        House{4, 67, 2}
    };

    //calling print function on first array of struct
    print_house(houses);
    
    cout << '\n';
    
    //calling print function on second array of struct
    print_house(another_house);



    return 0;
}
