#include<iostream>

//  A better approach to show multiple elements of an array
//  is by using a for loop.

int main() {
    //example : 

    std::string cars[]={"Lamborghini", "Ferrari", "Koeningsegg", "Wmotors"};
    for(int i=0; i<4; i++){
        std::cout<<cars[i]<<'\n';
    }

    // Because by using this approach you need to adjust your loops
    // everytime you modify the amount of data that an array holds, it is
    // better to use sizeof() to measure the total amount of elements.
    std::cout<<'\n';

    for(int i=0; i<sizeof(cars)/sizeof(std::string); i++){
    std::cout<<cars[i]<<'\n';
    }
}