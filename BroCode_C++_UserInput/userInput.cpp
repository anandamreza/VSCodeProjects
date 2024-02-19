#include<iostream>

// cout << (insertion operator)
// cin >> (extraction operator)

 int main(){
    std::string name, address;
    int age;

    std::cout<<"fullName : ";
    std::getline(std::cin, name);

    std::cout<<"Age      : ";
    std::cin>>age;

    std::cout<<"Address  : ";
    std::getline(std::cin>>std::ws, address); //'std::ws' is used to eliminate white spaces before taking user input.

    std::cout<<std::endl;
    std::cout<<"Your full name is "<<name<<".\n";
    std::cout<<"Your age is "<<age<<".\n";
    std::cout<<"Your address is "<<address<<".\n";



    
 }