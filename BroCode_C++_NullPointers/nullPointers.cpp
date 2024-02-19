#include<iostream>

//  Null Pointers = A special value that means something has no value.
//                  When a pointer holding a null value, that pointer
//                  is not pointing at anything.

//  nullptr = a keyword representing a null pointer literal.

//  Nullpointer is useful to determine if an address is successfully
//  assigned to a pointer or not.

// When using pointers, be careful that your code isn't dereferencing
// a nullptr or pointing to free memory. This will cause undefined
// behavior, such as segmentation fault.

int main() {
    int *pointer = nullptr;
    int x = 123;

    pointer = &x;

    if(pointer == nullptr){
        std::cout<<"Address was not assigned!";
    } else {
        std::cout<<"Address was asigned!\n";
        std::cout<<*pointer;
    }

    return 0;
}