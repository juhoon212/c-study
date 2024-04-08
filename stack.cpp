#include <iostream>

void foo() {

    int a;
    int b;
}

void bar() {
    
}

int main() {

    int a;
    double b;

    // stack 메모리에 쌓일때는 함수 단위로 쌓이는데 함수안에는 해당 객체의 멤버 변수를 참조하고 있는 this 라는 메모리 공간이 존재한다.

    foo();
    bar();
    return 0;
}