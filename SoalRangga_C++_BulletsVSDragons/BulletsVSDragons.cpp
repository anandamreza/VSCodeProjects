#include <iostream>
#include <ctime>

int main() {
    srand(time(NULL));
    int bullets = rand();
    int dragons = rand();

    if(dragons >= 2*bullets){
        std::cout << "win";
    } else {
        std::cout << "lose";
    }

    return 0;
}