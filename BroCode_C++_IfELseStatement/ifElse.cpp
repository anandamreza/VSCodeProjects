#include<iostream>

int main(){
    int age;

    std::cout<<"Enter your age : ";
    std::cin>>age;

    if(age>=100){
        std::cout<<"You are too old to enter!";
    }
    else if(age>=18){
        std::cout<<"Welcome to the Club!";
    }
    else if(age<=18){
        std::cout<<"You are not old enough to enter!";
    }
    else if(age<0){
        std::cout<<"You haven't been born yet!";
    }
    else {
        std::cout<<"Please input a number!";
    }
    
    return 0;
}