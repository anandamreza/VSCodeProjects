#include<iostream>

int main(){
    char grade;

    std::cout<<"Input letter grade : ";
    std::cin>>grade;

    switch(grade){
        case 'A':
            std::cout<<"You did great!";
            break;
        case 'B':
            std::cout<<"You did well!";
            break;
        case 'C':
            std::cout<<"You did okay!";
            break;
        case 'D':
            std::cout<<"You did not do good!";
            break;
        case 'E':
            std::cout<<"You did bad!";
            break;
        case 'K':
            std::cout<<"YOU FAILED!";
            break;
        default:
            std::cout<<"Please enter a letter only";
    }
}