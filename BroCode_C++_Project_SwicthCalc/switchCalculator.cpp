#include<iostream>

int main(){
    char Operator;
    double num1, num2, result;

    std::cout<<"Operator (+ - * /) : ";
    std::cin>>Operator;

    std::cout<<"Number 1 : ";
    std::cin>>num1;

    std::cout<<"Number 2 : ";
    std::cin>>num2;

    switch(Operator){
        case '+':
            result=num1+num2;
            std::cout<<"Result   : "<<result;
            break;
        case '-':
            result=num1-num2;
            std::cout<<"Result   : "<<result;
            break;
        case '*':
            result=num1*num2;
            std::cout<<"Result   : "<<result;
            break;
        case '/':
            result=num1/num2;
            std::cout<<"Result   : "<<result;
            break;
        default:
            std::cout<<"Please input the right operator!";
    }
    return 0;
}