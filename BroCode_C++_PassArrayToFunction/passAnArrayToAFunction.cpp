#include<iostream>

//  To pass an array to a function, include the '[]' sign as a parameter
//  in the declaration and definition of a function. However, you do
//  not need to include the sign as an argument, check line 15!
double getTotal(double prices[], int size);

int main() {
    double prices[]={5.99, 6.5, 7.7, 90, 75.5};

    // If you want to pass in a size of an array, in the main function, 
    // you need to declare it and calculate it first and then pass it.
    int size=sizeof(prices)/sizeof(prices[0]); 

    double total=getTotal(prices, size); // you do not need to include the '[]' sign.
    std::cout<<"$"<<total;

    return 0;
}

double getTotal(double prices[], int size){
    double total=0;

    for(int i=0; i<size; i++){ // i < size
        total += prices[i]; // total = total + prices[i];
    }

    return total;
}