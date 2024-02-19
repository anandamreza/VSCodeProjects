#include<iostream>

int main() {
    //  const is a keyword which turn a variable to read-only (cannot be altered).
    //  the const value cannot be changed. If it was modified later on by
    //  updating it's value in the next rows, it will crashed the program.
    //  also you need to declare it using capital letter.

    //  example :
    const double PI = 3.14159;

    double radius = 14;

    double circumference = 2 * PI * radius;
    std::cout << circumference << " cm";
    return 0;
}