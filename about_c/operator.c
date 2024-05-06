#include <stdio.h>

int main(void) {

    // 연산자 우선순위
    // '=' => copy && overwrite
    int a;
    a = 10; // => a는 location-value , 10은 r-value

    double ex = 5 / 2.0;
    // printf("%f\n", ex);

    int a1, a2;


    printf("두 정수를 입력하세요.: ");
    scanf("%d", &a1);
    scanf("%d", &a2);

    printf("a1 = %d\n", a1);
    printf("a2 = %d\n", a2);

    double a3 = (a1 + a2) / 2;

    printf("%f", a3);

    printf("AVG: %d\n", a1 + a2);
    

    return 0;
}