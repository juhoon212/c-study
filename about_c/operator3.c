#include <stdio.h>
#include <memory.h>

int main(void) {

    // sizeof => cpu 사용 x compile time 연산자
    int aList[3];

    printf("aList = %d\n", sizeof(aList));

    int bList[5];
    memset(bList, 0, sizeof(bList)); // void* memset(void* ptr, int value, size_t num); => ptr부터 num까지의 메모리 주소를 value 값으로 채운다.

    for (int i = 0; i < 5; i++) {
        printf("[%d]\n", *(bList));
    };

    

    return 0;
}