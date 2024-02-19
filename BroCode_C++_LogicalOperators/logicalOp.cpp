#include<iostream>

void space(){
    std::cout<<"\n\n";
}

int main(){
    // AND = && = is true if both values are true
    // OR  = || = is true if one of the values are true
    // NOT = !  = reverses the values of it's operand

    //example AND
    int temp;
    std::cout<<"Temperature : ";
    std::cin>>temp;

    if(temp>=0 && temp<=100){
        std::cout<<"The temperature is good!";
    }
    else {
        std::cout<<"The temperature is bad!";
    }

    space();

    //example OR
    int tempt;
    std::cout<<"Temperature : ";
    std::cin>>tempt;

    if(tempt<=0||tempt>=100){
        std::cout<<"The temperature is bad!";
    }
    else {
        std::cout<<"The temperature is good!";
    }   
    
    space();

    //example NOT
    bool sunny=true; 
    if(!sunny){
        std::cout<<"It is sunny!";
    }
    else {
        std::cout<<"It is cloudy!";
    }

    return 0;
}