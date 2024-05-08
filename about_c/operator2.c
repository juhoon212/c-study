#include <stdio.h>

int main(void) {

    int a = 0;
    
    a = ++a;
    printf("a1 = %d\n", a); // 1
    a = 0;
    a = a++;

    printf("a2 = %d\n", a); // 0 ++ 연산자는 맨 마지막에 작동.
}