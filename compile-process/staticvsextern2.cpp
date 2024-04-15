#include <iostream>

int a = 100;


static void bar() {
    std::cout << "bar" << std::endl;
    
}

void foo() {
    std::cout << "foo" << std::endl;
    bar();
}