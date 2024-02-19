#include <iostream>

// Struct = A structure that group related under one name. Structs can contain many
//          different data types (string, int, double, bool, etc. ). Variables in
//          a stuct are known as 'members'. Members can be access with
//          ( . ) "Class Member Access Operator".

struct student{
    std::string name;
    double gpa;
    bool pass;
    bool enrolled = true; // You can set default value to members. You 
                          // don't need to explicitly state it again
                          // in the main function.
};

int main() {
    student student1;
    student1.name = "Spongebob";
    student1.gpa = 3.9;
    student1.pass = true;

    std::cout << student1.name << '\n';
    std::cout << student1.gpa << '\n';
    std::cout << student1.pass << '\n';  
    std::cout << student1.enrolled;

    return 0;
}