#include<iostream>

void space(){
    std::cout<<"\n";
}

int main(){
    //ternary operator ?: is a replacement to an if/else statement.
    //syntax --> condition ? expression 1 (true) : expression 2 (false);

    //example 1
    int grade=70;
    grade>=80 ? std::cout<<"PASSED" : std::cout<<"FAILED";

    space();

    //example 2
    int num=8;
    num%2 ? std::cout<<"ODD" : std::cout<<"EVEN"; //result '1' returns as true, while '0' is false;

    space();

    //example 3
    bool hungry=true;
    hungry ? std::cout<<"You are hungry!" : std::cout<<"You are full!";

    space();

    //another syntax that work as well : 
    std::cout<<(hungry ? "You are hungry!" : "You are full!");

    return 0; 
}