#include<iostream>

//  functions : a block of reusable code.

//example :
void HappyBirthday(std::string name, int age); //people usually declare functions before the
                                               //main function, then define it later.

int main() {
    std::string name;
    int ages;

    std::cout<<"Enter your name : ";
    getline(std::cin, name);
    std::cout<<"Enter your age : ";
    std::cin>>ages;

    HappyBirthday(name, ages);

    return 0;
}

void HappyBirthday(std::string name, int age){
    std::cout<<"Happy Birthday "<<name<<"!\n";
    std::cout<<"Happy Birthday "<<name<<"!\n";
    std::cout<<"Happy Birthday dear "<<name<<"!\n";
    std::cout<<"Happy Birthday "<<name<<"!\n";
    std::cout<<"You are "<<age<<" Years Old!\n\n";
}