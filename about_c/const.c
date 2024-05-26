#include <stdio.h>

int main(void) {

    const int nCutOff = 70;
    int nInput = 0;

    printf("점수를 입력하세요. : ");
    scanf("%d", &nInput);

    if (nInput >= nCutOff) {
        printf("합격입니다.\n");
    } else {
        printf("불합격입니다.\n");
    }


    int nData = 4;
    int nData2 = 4;
    const int* pnData = &nData;

    int* const pnData2 = &nData;
    
    // pnData2 = &nData2;

    nData = 8;

    return 0;
}