#include<iostream>

//  For Each Loop = Less syntax, but less flexible. It is suitable to use
//                  for showing all elements within an array.

int main() {
    int grades[]={94, 88, 75, 69};

    for(int grade : grades){
        std::cout<<grade<<'\n';
    }

    return 0;
}