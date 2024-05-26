#include <stdio.h>

int main(void) {

    volatile int nResult = 0; // volatile을 쓰면 사용한 변수를 의존하는 모든 연산은 컴파일러 최적화가 이루어지지 않는다.
    
    for (int i = 0; i < 10; i++) {
        nResult = 10;
    }

    printf("%d\n", nResult);

    return 0;
}