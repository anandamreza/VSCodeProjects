#include <stdio.h>
#include <iostream>
 
int main() {
    int N, minutes, hours;
    
    std::cout << "N : ";
    std::cin >> N;

    minutes = N/60;
    N = N % 60;
    
    hours = minutes/60;
    minutes = minutes % 60;
    
    std::cout << hours << ':' << minutes << ':' << N << '\n';
 
    return 0;
}