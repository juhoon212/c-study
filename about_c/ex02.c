#include <stdio.h>

int main(void) {
    
    int ex1;
    int ex2;
    
    printf("오늘의 숫자 두 개를 입력하세요.");
    printf("첫 번째 숫자 : ");
    scanf("%d%*c", &ex1);

    printf("두 번째 숫자 : ");
    scanf("%d", &ex2);
    
    printf("오늘의 숫자 합 : %d\n", ex1 + ex2);

    return 0;
}