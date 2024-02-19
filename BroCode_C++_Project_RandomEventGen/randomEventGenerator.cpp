#include<iostream>
#include<ctime> 

int main() {
    srand(time(0));

    int numRand = rand() % 6 + 1;

    switch(numRand){
        case 1: std::cout<<"You win a pencilcase!";
                break;
        case 2: std::cout<<"You win a t-shirt!";
                break;
        case 3: std::cout<<"You win a free lunch!";
                break;
        case 4: std::cout<<"You win a gift card!";
                break;
        case 5: std::cout<<"You win concert tickets!";
                break;
        case 6: std::cout<<"You win a minivan!";

        return 0;
    }
}