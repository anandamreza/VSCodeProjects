#include<iostream>

//  Local Variables = variables that declared inside functions or blocks {}.
//  Global Variables = variables that declared outside of all functions.

//  Within a different scope, two identical variable name is fine.
//  It is more secure to declare variable inside functions because functions
//  prioritize local variables.

int myNum=3; //example of a global variable.

void printNum();

int main() {
    int myNum=1; //example of a local variable.

    std::cout<<myNum<<'\n'; //prints myNum inside the main function.
    printNum();             //prints myNum inside the printNum function.

    //  using the scope resolution operator :: , instead of using the 
    //  local version of the declared variable, it will use the global
    //  version of the same variable.
    std::cout<<::myNum<<'\n';
    return 0;
}

void printNum(){
    int myNum=2; //example of a local variable.
    std::cout<<myNum<<'\n';
}