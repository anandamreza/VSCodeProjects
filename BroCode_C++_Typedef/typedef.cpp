#include<iostream>

void space(){
    std::cout<<std::endl;
}

//typedef is used to make an alias for an entity.
typedef std::string word_t;

//rightnow the 'using' keyword is more popular due to its
//suitableness to templates.
using word = std::string;

int main(){
    //cout with typedef.
    word_t name = "Bro";
    std::cout << name;

    space();

    //cout with using.
    word city = "London";
    std::cout << city;
    
    return 0;
}