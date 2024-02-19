#include<iostream>

void space() {
    std::cout<<"\n";
}

// Array = a data stcuture that can holds multiple values. Values can be accessed 
//         using index numbers. An array can only holds one data type.

int main() {
    //example 1 : 
    std::string car[]={"Corvette", "Camry", "Mustang"};
    std::cout<<car<<'\n'; //show the memory address of the array 'car'.
    std::cout<<car[0]<<'\n'; //show corvette (index 0).
    std::cout<<car[1]<<'\n'; //show camry (index 1).

    //you can modify the array values.
    car[2] = "Lamborghini";
    std::cout<<car[2]<<'\n';

    //example 2 :
    double idrprices[]={5000, 12000, 50000, 100000};
    std::cout<<idrprices[0]<<'\n';
    std::cout<<idrprices[1]<<'\n';
    std::cout<<idrprices[2]<<'\n';
    std::cout<<idrprices[3]<<'\n';

    return 0;
}