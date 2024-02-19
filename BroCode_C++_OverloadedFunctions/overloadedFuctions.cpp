#include<iostream>

//  Overloading Functions = functions can share the same name under different parameters.
//                          a function name plus its parameters are known as function 
//                          signature. Each of them need to be unique.

void BakePizza();
void BakePizza(std::string topping1);
void BakePizza(std::string topping1, std::string topping2);

int main() {
    BakePizza();
    
    return 0;
}

void BakePizza(){
    std::cout<<"Here's your Pizza!";
}
void BakePizza(std::string topping1){
    std::cout<<"Here's your Pizza with "<<topping1;
}
void BakePizza(std::string topping1, std::string topping2){
    std::cout<<"Here's your Pizza with "<<topping1<<" and "<<topping2;
}
