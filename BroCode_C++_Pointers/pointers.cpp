#include<iostream>

//  pointers = variable that stores memory address of another variable.
//             We work with pointers because sometimes it is easier to
//             work with an address.

//  & is an address-of operator.
//  * is a dereference operator.

int main() {
    //example 1 :
    std::string name = "Bro";
    std::string *pName = &name;

    std::cout<<pName<<'\n'; //prints the memory address of pName (0x5ffe50).
    std::cout<<*pName<<'\n'; //prints the value of the address of pName (Bro).

    //example 2 : 
    int age = 20;
    int *pAge = &age;

    std::cout<<*pAge<<'\n'; //prints the value of the address of pAge (20).

    //example 3 :
    std::string freePizzas[5] = {"pizza1", "pizza2", "pizza3", "pizza4", "pizza5"};
    std::string *pFreePizzas = freePizzas; //Because an array is already an address, you
                                           //did not need to use the address-of (&) operator.

    std::cout<<pFreePizzas<<'\n'; //prints the address of the array freePizzas.
    std::cout<<*pFreePizzas; //prints the first value of the array freePizzas (pizza1).
                  
    return 0;
}