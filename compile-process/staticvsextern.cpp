#include <iostream>

extern int a; // a의 정의는 바깥쪽 어딘가에 있어 라는 메세지 extern!

void foo(); // declaration

int main() {

    // std::cout << a << std::endl;
    foo();

    return 0;
}