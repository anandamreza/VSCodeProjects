#include<iostream>

//  Fill() = We can range an element in specified value.
//  syntax = fill(begin, end, value).

int main() {
    //example :
    int count=1;
    
    const int SIZE = 33;
    std::string foods[SIZE];

    fill(foods, foods + (SIZE/3), "pizza"); //begins with food & ends with foods + 11
    fill(foods + (SIZE/3), foods + (SIZE/3)*2, "burgers"); //begins with foods 11 & ends with foods 22
    fill(foods + (SIZE/3)*2, foods + SIZE, "takoyaki"); //begins with foods 22 & ends with foods 33
    for(std::string food : foods){
        std::cout<<food<<" "<<count<<'\n';
        count++;
    }

    return 0;
}