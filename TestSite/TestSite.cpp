#include <stdio.h>
#include <iostream>
#include <cmath>
#include <iomanip>
 
int main() 
{
    float A, B, C;
    float R1, R2;
    
    std::cin >> A >> B >> C;
    
    float discriminant = (B * B) - (4 * A * C);
    
    if(discriminant > 0 && A != 0)
    {
        R1 = (-B + sqrt(discriminant)) /(2 * A);
        R2 = (-B - sqrt(discriminant)) /(2 * A);
        
        std::cout << std::setprecision(5) << "R1 = " << round(R1) << '\n';
        std::cout << std::setprecision(5) << "R2 = " << round(R2) << '\n';
    }
    else
    {
        std::cout << "Impossivel calcular";
    }
    
    return 0;
}