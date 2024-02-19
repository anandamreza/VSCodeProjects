#include <iostream>

struct Car{
    std::string model;
    int year;
    std::string color;
};

void showCar(Car &car);
void paintCar(Car &car, std::string color);

int main() {
    Car car1;
    car1.model = "Sedan";
    car1.year = 2023;
    car1.color = "red";

    Car car2;
    car2.model = "Sport";
    car2.year = 2020;
    car2.color = "blue";

    paintCar(car1, "gold");
    showCar(car1);
    showCar(car2);

    return 0;
}

void showCar(Car &car){
    std::cout << car.model << '\n';
    std::cout << car.year << '\n';
    std::cout << car.color << "\n\n";
}
void paintCar(Car &car, std::string color){
    car.color = color;
}