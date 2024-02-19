#include<iostream>
#include<ctime>

int main() {
    int num, guess, tries=0;

    srand(time(NULL));
    num=(rand()%1000)+1;

    std::cout<<"***** NUMBER GUESSING GAME *****\n";

    do{
        std::cout<<"Pick a number between 1-1000 : ";
        std::cin>>guess;
        tries++;

        if(guess>num){
            std::cout<<"Too high!\n";
        }
        else if(guess<num){
            std::cout<<"Too low!\n";
        }
        else {
            std::cout<<"CORRECT!\n";
            std::cout<<"Number of tries : "<<tries<<'\n';
        }
    }while(num!=guess);

    std::cout<<"********************************";

    return 0;
}