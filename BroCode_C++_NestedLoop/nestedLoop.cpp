#include<iostream>

//  Nested Loop : is a loop inside another loop.

int main() {
    int rows, columns;
    char symbol;

    //example :
    std::cout<<"How many rows? : ";
    std::cin>>rows;
    
    std::cout<<"How many columns? : ";
    std::cin>>columns;

    std::cout<<"Enter a symbol to use : ";
    std::cin>>symbol;

    for(int i=0; i<=rows; i++){
        for(int j=0; j<=columns; j++){
            std::cout<<symbol;
        }
        std::cout<<'\n';
    }

    return 0;
}