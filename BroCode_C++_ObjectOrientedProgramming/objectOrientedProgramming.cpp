#include <iostream>

// Object = A collection of attributes and methods. Attributes are characteristics
//          of an object and methods are functions that an object can perform.
//          Object can be used to mimic real world items (car, phone, cat, etc. ).
//          Object is created from a class, which act as a blue-print.

class Human{
    public:
        std::string name;
        std::string occupation;
        int age;

        void eat(){
            std::cout << "This person is eating.\n";
        }
        void sleep(){
            std::cout << "This person is sleeping.\n";
        }
        void work(){
            std::cout << "This person is working.\n";
        }
};

class Car{
    public:
        std::string make;
        std::string model;
        int year;
        std::string color;

        void accelerate(){
            std::cout << "You stepped on the gas!\n";
        }
        void brake(){
            std::cout << "You stepped on the break!\n";
        }
};

int main() {
    Human human1;
    human1.name = "Rick";
    human1.occupation = "Doctor";
    human1.age = 39;
    
    std::cout << human1.name << '\n';
    std::cout << human1.occupation << '\n';
    std::cout << human1.age << '\n';

    human1.eat();
    human1.sleep();
    human1.work();

    std::cout << '\n';

    Car car1;
    car1.make = "Ford";
    car1.model = "Mustang";
    car1.year = 1998;
    car1.color = "Gold";

    std::cout << car1.make << '\n';
    std::cout << car1.model << '\n';
    std::cout << car1.year << '\n';
    std::cout << car1.color << '\n';

    car1.accelerate();
    car1.brake();

    return 0;
}