#include <iostream>
#include <cstring>

class Car {
    private:
        std::string name;
        int age;
    public:
        Car() = default;
        std::string GetName(std::string name) {
            this->name = name;
            return this->name;
        }
        int GetAge() {
            age = 1;
            return age;
        }
};

int main() {
    Car *car = new Car();
    car->GetName("kitty");
    car->GetAge();

    std::cout << car->GetName("kitty") << std::endl;
    std::cout << car->GetAge() << std::endl;
    delete car;
}

    

    
