#include <iostream>

void fooV(int a) {
    int b = a + 1;
}

void fooP(int* ap) {
    int b = *ap + 1;
    std::cout << b << std::endl;
}

void fooR(const int& a) {
    int b = a + 1;
}

int main() {
    int a = 0;
    fooV(a);
    fooP(&a);
    fooR(a);

    return 0;
}