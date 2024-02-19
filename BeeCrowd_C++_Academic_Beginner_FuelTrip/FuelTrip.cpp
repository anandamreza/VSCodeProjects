#include <stdio.h>
#include <iostream>
#include <iomanip>
 
int main() {
    int trip, speed; 
    double liters;
    
    std::cin >> trip;
    std::cin >> speed;

    liters = ((double)trip * (double)speed)/12.0;
    
    std::cout << std::setprecision(3) << std::fixed << liters << '\n';
 
    return 0;
}