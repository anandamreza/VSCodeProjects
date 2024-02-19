#include<iostream>

//  while loop : like an if else statement but has the potential
//  to repeat the code infinite amount of time. It will execute
//  the code as long as the given condition is true.

int main() {
    std::string name;

    //example : 
    while(name.empty()){
        std::cout<<" Please enter your name : ";
        std::getline(std::cin, name);
    }

    std::cout<<" Your name is "<<name;

    return 0;
}