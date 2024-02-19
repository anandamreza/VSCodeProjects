#include<iostream>

//  Const Parameter = parameter that is read-only. Code is secure and it conveys
//                    intent. It is useful for references and pointers.
                      

void printInfo(const std::string name, const int age);

int main() {
    std::string name = "Bro";
    int age = 8;

    printInfo(name, age);

    return 0;
}

void printInfo(const std::string name, const int age){
    //name=" ";
    //age=0;

    std::cout<<"Name : "<<name<<'\n';
    std::cout<<"Age : "<<age<<'\n';
}
