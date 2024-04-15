#include "dog.h"
#include <iostream>

static void bye() {
    std::cout << "bye" <<std::endl;
}

void Dog::speak() {
    std::cout << "bow" << std::endl;
    std::cout << "i'm" << age << std::endl;
    bye();
}