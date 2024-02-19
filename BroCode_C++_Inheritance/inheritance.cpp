#include <iostream>

// Inheritance = a parent class can inherit attributes and methods to its child classes.
//               It increases efficiency by makes code reusable.

// example 1 :

class Animal{ //a parent class.
    public:
        bool alive = true;
    void eat(){
        std::cout << "This animal is eating!\n";
    }
};
class Cat : public Animal{ //a child class.
    public:
    
    void meow(){
        std::cout << "This cat is meowing...\n";
    }
};

// example 2 :

class Shape{ //a parent class.
    public:
        double area;
        double volume;
};
class Cube : public Shape{ //a child class.
    public:
        double side;
    Cube(double side){
        this->side = side;
        this->area = side * side * 6;
        this->volume = side * side * side;
    }
};
class Sphere : public Shape{ //a child class.
    public:
        double radius;
    Sphere(double radius){
        this->radius = radius;
        this->area = 4 * 3.14159 * (radius * radius);
        this->volume = (4/3.0) * 3.14159 * (radius * radius * radius);
    }

};

int main() {
    Cat catone;

    std::cout << catone.alive << '\n';
    catone.eat();
    catone.meow();
    
    Cube cube(10);
    std::cout << "Area : " << cube.area << "Cm\n";
    std::cout << "Volume : " << cube.volume << "Cm^3\n";

    return 0;
}