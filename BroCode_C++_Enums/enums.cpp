#include <iostream>

// Enums = a user-defined data type that consists of paired named-integer constants. 
//         Enums are great if you have a set of potential options.

enum Day {sunday = 0, monday = 1, tuesday = 3, wednesday = 4, thursday = 5,
          friday = 6, satudray = 7};

// If you did not asign a value like above example, the program will implicitly
// assigns it from 0 (just like the above example).

enum Flavour {chocolate, strawberry, vanilla, taro, green_tea};

Flavour iceCream = chocolate;

int main() {
    switch(iceCream){
        case chocolate: std::cout << "I want a chocolate ice cream!";
        break;
        case strawberry: std::cout << "I want a strawberry ice cream!";
        break;
        case vanilla: std::cout << "I want a vanilla ice cream!";
        break;
        case taro: std::cout << "I want a taro ice cream!";
        break;
        case green_tea: std::cout << "I want a green tea ice cream!";
        break;
        default: std::cout << "You need to pick a flavour!";
    }

    return 0;
}