#include<iostream>

//namespace are used to prevent name conflicts. It allows entities with the same name
//to exist but their namespaces are need to be different.

namespace first{
    int x=1;
}

namespace second{
    int x=2;
}

int main(){
    int x=0;
    std::cout << x << '\n';         //  prints x in the main function.
    std::cout << first::x << '\n';  //  prints x in the namespace firts.
    std::cout << second::x << '\n'; //  prints x in the namespace second.
}