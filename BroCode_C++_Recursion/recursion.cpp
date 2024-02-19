#include <iostream>

// Recursion = A programming technique where a function invokes itself
//             from within. Recursion breaks a complex consept into
//             repeatable single steps. 

// Advantages = less code and is cleaner, and useful for sorting and
//              searching algotithms.
// Disadvantages = Slower and takes more memory.

int factorial_iterative(int num);
int factorial_recursion(int num);

int main() {
    std::cout << factorial_iterative(10) << '\n';
    std::cout << factorial_recursion(10);

    return 0;
}

// iterative approach
int factorial_iterative(int num){
    int result = 1;
    for(int i = 1; i <= num; i++){
        result = result * i;
    }
    return result;
}

// recursion approach
int factorial_recursion(int num){
    if(num > 1){
        return num * factorial_recursion(num - 1);
    } else {
        return 1;
    }
}
