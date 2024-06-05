#include "class.h"
#include <iostream>
#include <cstring>

void Car::initMembers(char *ID, int fuel) {
    fuelGauge = fuel;
    strcpy(gamerId, ID);
    curSpeed = 0;
};

void Car::showCarState() {
    std::cout << gamerId << std::endl;
}


int main() {
    Car *run99 = new Car();
    run99->initMembers("run99", 100);
    run99->showCarState();
    
    delete run99;
    
    return 0;
}