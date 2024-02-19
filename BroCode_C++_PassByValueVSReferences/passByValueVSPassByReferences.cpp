#include<iostream>

void swap(std::string &x, std::string &y);

int main() {
    std::string x = "Coffee";
    std::string y = "Mineral Water";
    std::string temp;

    //switching by values.
    temp = x;
    x = y;
    y = temp;

    std::cout<<"X : "<<x<<'\n';
    std::cout<<"Y : "<<y<<'\n';

    //switching by references.
    swap(x, y);

    std::cout<<"X : "<<x<<'\n';
    std::cout<<"Y : "<<y<<'\n';


    return 0;
}

void swap(std::string &x, std::string &y){
    std::string temp = x;
    x = y;
    y = temp;
}