#include<iostream>

// Break : used to break out of a loop.
// Continue : used to skip the current iteration.

int main() {
    //example : 
    for(int i=1; i<=100; i++){
        if(i==13){
            continue; //skips i=13.
        } else if(i==21){
            break;    //stop at i=21.
        } else {
            std::cout<<i<<'\n';
        }
    }

    return 0;
}