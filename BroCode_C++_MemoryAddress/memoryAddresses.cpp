#include<iostream>

//  Memory Address = a location in memory where data is stored.
//  A memory address can be accessed with '&'.

int main() {
    int numbers;
    std::string names;
    bool sleeping;

    std::cout<<&numbers<<'\n';  // 0x5ffe8c in decimal -> 6291084 
    std::cout<<&names<<'\n';    // 0x5ffe60 in decimal -> 6291040
    std::cout<<&sleeping<<'\n'; // 0x5ffe5f in decimal -> 6291039

    return 0;
}