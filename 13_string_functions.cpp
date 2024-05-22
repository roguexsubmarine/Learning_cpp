// 1 string length                    std::string::length
// 2 string copy                      std::strcopy
// 3 string comparison                std::string::compare
// 4 string conversion to integer     std::stoi
// 5 string conversion to double      std::stod
// 6 numeric to string                std::to_string
// 7 string concatenation             std::string::operator+
// 8 string substring                 std::string::substr
// 9 string replacement               str.replace


#include <iostream>
#include <string>
#include <cstring> // for strcpy

int main(){
    
    //1 length
    std::string str = "Hello, World!";
    int length = str.size();  // Returns the length of the string, which is 13
    std::cout << "The length of the string is: " << length << std::endl;

    //2 copy
    char source[] = "Hello, World!";
    char destination[20]; 
    strcpy(destination, source); // include <cstring>
    std::cout << "Source string: " << source << std::endl;
    std::cout << "Copied string: " << destination << std::endl;

    //3 comparison
    std::string str1 = "apple";   
    std::string str2 = "banana";
    int result = str1.compare(str2);
    std::cout << result << std::endl;

    //4 stoi
    std::string num_string = "123";
    int num = stoi(num_string);
    std::cout << num << std::endl;

    //5 stod
    std::string d_string = "3.14";
    double pi = stod(d_string);
    std::cout << pi << std::endl;
    
    //6 number to string
    float f{1.1111};
    std::string f_str = std::to_string(f);
    std::cout << f_str << " is a string" << std::endl;

    //7 concatenation
    std::string st1 = "Hello";
    std::string st2 = " World!";
    std::string concat = st1 + st2;
    std::cout << concat << std::endl;

    //8 substring
    std::string s = "Hello, World!";
    std::string substr = s.substr(7, 5);  // Extracts "World" from the original string
    std::cout << "The substring is: " << substr << std::endl;

    //9 replacement
    std::string rep = "Hello, World!";
    rep.replace(7, 5, "Universe");  // Replaces the substring "World" with "Universe"
    std::cout << rep << std::endl;



    return 0;
}
