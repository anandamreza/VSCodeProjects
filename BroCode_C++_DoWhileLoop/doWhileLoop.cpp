#include<iostream>

//  Do While Loop : do the code once then repeat again
//                  if the condition is true.

int main() {
    int number;

    //example : 
    do{
        std::cout<<" Please enter a positive number : ";
        std::cin>>number;
    } while(number<=0);

    std::cout<<" The number is "<<number;
    
    return 0;
}