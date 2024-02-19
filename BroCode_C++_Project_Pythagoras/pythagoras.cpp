#include<iostream>
#include<cmath>

int main(){
    double a, b, c;

    std::cout<<"Side a : ";
    std::cin>>a;

    std::cout<<"Side b : ";
    std::cin>>b;

    c = sqrt(pow(a, 2) + pow(b, 2));

    std::cout<<"Side c : "<<c;
}