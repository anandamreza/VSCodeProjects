#include<iostream>

//  sizeof() = it returns the size in bytes of a : 
//             variable, data type, class, object, etc.

int main() {
    //examples : 
    double gpa = 4.0; //a size of a double is 8 bytes.
    int apple = 1; //a siza of an integer is 4 bytes.
    std::string name = "Jacob"; //a size of a string is 32 bytes.
    char grade = 'A'; //a size of a character is 1 byte.
    bool doctor = true; //a size of a boolean is also 1 byte.

    std::cout<<sizeof(gpa)<<" bytes.\n";

    //  an array size are proportional to the amount of data it holds,
    //  for instance an array of 5 characters has the size of 5 bytes.

    char grades[] = {'A', 'B', 'C', 'D', 'D'};
    std::cout<<sizeof(grades)<<" bytes.\n";

    //  to find the amount of data an array holds, divide the size of
    //  the array and divide it with the size of it's data type.

    std::cout<<sizeof(grades)/sizeof(char)<<" element.\n";

    return 0;
}