#include<iostream>
#include<ctime> //  the ctime header are used to access the time function.

//  pseudo-Random : Not truly random, but close.

int main() {
    //example : 

    // the srand function uses current time as a seed to generate random numbers.
    srand(time(NULL));

    // the rand function gives you random numbers between 0 and 32.767.
    int num=(rand()%6)+1;

    std::cout<<num;

    return 0;
}