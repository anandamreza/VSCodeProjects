#include <iostream>

// Abstraction = hiding unnecessary data outside a class.
// Getter = function that makes private attribute READABLE.
// Setter = function that makes private attribute WRITABLE.

class Stove{
    private: //an abstraction.
        int temperature = 0;
    public: 

    int getTemperature(){ //a getter.
        return temperature;
    }
    void setTemperature(int temperature){ //a setter.
        if(temperature < 0){
            this->temperature = 0; 
        } else if(temperature >= 10){
            this->temperature = 10;
        } else {
            this->temperature = temperature;
        }
    }
};

int main() {
    Stove stove;

    stove.setTemperature(1000);
    std::cout << "The temperature setting is : " << stove.getTemperature() << '\n';

    return 0;
}