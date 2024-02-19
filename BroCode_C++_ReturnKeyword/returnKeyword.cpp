#include<iostream>
#include<cmath>

//  Return = return a value back to the spot where you
//           called the encompassing function.

double square(double length);
double cube(double length);

std::string ConcatString(std::string string1, std::string string2);

int main() {
    //example 1:
    double length = 5.0;
    std::cout<<"The area of the square is "<<square(length)<<" cm^2.\n";
    std::cout<<"The volume of the square is "<<cube(length)<<" cm^3.\n";

    //example 2:
    std::string firstName = "Hello";
    std::string lastName = "Bro";
    std::cout<<"Your full name is "<<ConcatString(firstName, lastName);

    return 0;
}

double square(double length){
    return pow(length, 2);
}
double cube(double length){
    return pow(length, 3);
}

std::string ConcatString(std::string string1, std::string string2){
    return string1+" "+string2;
}