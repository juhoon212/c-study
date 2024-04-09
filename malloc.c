
#include <stdlib.h>
#include <stdio.h>

int main() {

    int* i = (int*)malloc(sizeof(int)); // 원하는 형식 포인터로 변환
    printf("초기 %d \n", *i);
    
    *i = 20;
    printf("초기 : %d \n", *i);
    free(i);

    return 0;
}