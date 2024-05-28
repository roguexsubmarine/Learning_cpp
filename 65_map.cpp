/*
- generalized array of key value pair
- data type can be anything
- keys do not have to be consecutive
- 
- IF key is requested which is not present, that key is added mapped to default value (0)
- to check if key-value pair exist use if condition
 
 */

//find - finds key for value - m.find(key)
//erase - erases the key value pair - m.erase(key)
//clear - clears the whole dictionary - m.clear()
//empty - isEmpty function
//size - returns size (no. of key-value pairs)
//pair_insert - to insert a key-value pair
//
//to access key-value pair for map m -
//m.first : key
//m.second : value

#include <bits/stdc++.h>
using namespace std;

int main(){
    
    map<string, int> m;
    
    m["monkey"] = 4;
    m["banana"] = 3;
    m["harpsicord"] = 9;



    cout << m["banana"] << '\n';
    
    for(auto x : m){
        cout << x.first << " : " << x.second << '\n';
    }
    
    //key was not present but it will be added since it was requested
    cout << m["minions"] << '\n';
    

    for(auto x : m){
        cout << x.first << " : " << x.second << '\n';
    }

    if( !m["minions"]){
        cout << "value for key(minions) does not exist.\n";
    }

    auto key = "monkey";
    auto it = m.find(key);

    //erasing key (2 ways)
    m.erase(it);
    m.erase("banana");
    
    cout << "\nAfter deleting monkey and banana => \n";
    for(auto x : m){
        cout << x.first << " : " << x.second << '\n';
    }
    cout << '\n';

    //clearing map
    m.clear();
    
    //empty function
    if(m.empty()){
        cout << "Map is empty.\n";
    }

    //pair insert
    m.insert({"years_of_death", 1000});

    for(auto x : m){
        cout << x.first << " : " << x.second << '\n';
    }
    

    return 0;
}
