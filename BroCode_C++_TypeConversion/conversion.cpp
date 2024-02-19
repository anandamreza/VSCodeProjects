#include<iostream>

void space(){
    std::cout<<"\n";
}

int main(){
    // type conversion = refers to changing one type of data to another.
    // implicit = automatically converted by computer when the code is running.
    // explicit = user manually change it by putting identification.

    //example implicit:
    int numbers = 3.14;
    std::cout<<numbers; //it will converted to 3.

    space();

    //example explicit:
    int num = 100;
    std::cout<<(char)num; //num, with the value of 100 will be converted 
                          //to char based on ascii table, for which it will print "d".
}