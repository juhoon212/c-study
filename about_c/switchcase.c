#include <stdio.h>

int main(void) {


    int nInput = 0;
    char chCredit = 'X';
    scanf("%d", &nInput);

    switch (nInput / 10) { // 실수 사용 x
        case 10:
        case 9:
            chCredit = 'A';
            break;
        case 8:
            chCredit = 'B';
            break;
        case 7:
            chCredit = 'C';
            break;
        case 6:
            chCredit = 'D';
            break;
        default:
            chCredit = 'F';
    }

    printf("Credit : %c\n", chCredit);

    int aInput = 0;
    scanf("%d", &aInput);
    
    if (aInput > 5) {
        goto Error; // goto는 예외처리 할때도 쓴다.
    }

    printf("Number: %d\n", aInput);

    Error:
        puts("오류 입니다.");

    

    return 0;
}