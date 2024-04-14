
#define ABCD 2
#include <iostream>

int main() {

    #ifdef ABCD
        std::cout << "1: yes\n";
    #else
        std::cout << "1: no\n";
    #endif

    #ifndef ABCD
        std::cout << "2: no1\n";
    #elif ABCD == 2
        std::cout << "2yes\n";
    #else
        std::cout << "2: no\n";
    #endif

    return 0;
}