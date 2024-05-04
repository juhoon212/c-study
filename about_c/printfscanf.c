// scanf
// 키보드 입력을 받아서 저장

#include <stdio.h>

int main(void) {

    // int input;
    // printf("값을 입력하세요 : ");
    // scanf("%d", &input);
    // return 0;

    int one, two, three;
    printf("3개의 정수를 입력하세요 : ");
    scanf("%d %d %d" , &one, &two, &three);
    printf("첫번째 정수의 값 : %d", one);

}