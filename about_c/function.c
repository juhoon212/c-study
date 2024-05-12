#include <stdio.h>

int Add(int a, int b); // .h => 선언

int main(void) {
    
    int result = Add(1,2);
    printf("%d\n", result);

    return 0;
}

int Add(int a, int b) { // 정의
    return a + b;
}

