#include<iostream>

int main() {
    // Increment and Decrement can be postfix and prefix. 

    // In an increment as postfix, the value of 'x' is going to be signed to 'y' and then
    // incremented :
    int x = 10;
    int y = x++;

    std::cout << "x : " << x << '\n'; // x = 11.
    std::cout << "y (x++) : " << y << '\n'; // y = 10.

    // On the other hand, in an increment as prefix, the value of 'x' is going to be 
    // incremented first, and then signed to 'z'.
    int z = ++x;
    std::cout<< "z (++x) : " << z << '\n'; // z = 11.

    // This happens in decrement as well.

    return 0;
}