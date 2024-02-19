#include<iostream>
#include<cmath>

int main(){
    double x = 3.99;
    double y = 4;
    double minimum, maximum, power, square_root, absolute, round1, ceiling, floor1;

    minimum = std::min(x, y); // find the minimum number between two values.
    maximum = std::max(x, y); // find the maximum number between two values.
    power = pow(2, 4); // calculate 2 with the power of 4.
    square_root = sqrt(25); // find the square-root of 25.
    absolute = abs(-20); // find the absolute value of -20.
    round1 = round(x); //rounding x, prints 4.
    ceiling = ceil(x); //rounding up x, prints 4.
    floor1 = floor(x); //rounding down x, prints 3.

    //note: min and max functions are included in <algorithm> header.

    double Maths[8]={minimum, maximum, power, square_root, absolute, round1, ceiling, floor1};
    for(int i = 0; i<8; i++){
        std::cout<<i+1<<". "<<Maths[i]<<'\n';
    }

    return 0;
}