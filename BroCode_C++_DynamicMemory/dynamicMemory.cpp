#include<iostream>

// Dynamic Memory = Memory that is allocated dynamically after the program
//                  is already compiled and running. Use the 'new' operator
//                  to allocate memory in the heap rather than in the stack.

// Dynamic memory is useful when we don't know how much memory we will need.
// It makes our program more flexible, especially when accepting user input.

int main() {
    //example 1 :
    int *pNum = NULL;

    pNum = new int;

    *pNum = 123;

    std::cout << "Address : " << pNum << '\n';
    std::cout << "Value : " << *pNum << '\n';

    delete pNum;

    //example 2 :
    char *pGrades = NULL;
    int size;

    std::cout<<"How many grades to enter? : ";
    std::cin>>size;

    pGrades = new char[size];

    for(int i=0; i<size; i++){
        std::cout << "Enter grade : " << i+1 << ": ";
        std::cin >> pGrades[i];
    }

    for(int i=0; i<size; i++){
        std::cout << pGrades[i] << " ";
    }

    delete[] pGrades;

    return 0;
}