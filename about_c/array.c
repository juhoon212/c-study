#include <stdio.h>

int main() {
    
    int aList[3] = {0};

    printf("%d\n", sizeof(aList));

    printf("%d\n", aList);
    printf("%d\n", &aList);
    printf("%d\n", &aList[0]);
    printf("%d\n", aList + 0); // 다같은 놈

    printf("%d\n", &aList + 1); // aList전체로 부터 + 1한 놈

    int* pData = aList;
    printf("%u\n", pData);

    printf("%d\n", &aList);

    printf("=============================\n");
    
    int bList[5] = {10, 20, 30, 40, 50};
    int bListNew[5] = {0};
    int i = 0;

    int* cListNew = bList;  // => bListNew는 lvalue 즉 주소 

    for (int i = 0; i < sizeof(bListNew) / 4; i++) {
        printf("%d\n", cListNew[i]);
    }

    // 배열 전체 = 0번 요소의 주소

    char* aString = "Hello"; // Hello 는 문자열(문자배열) 그러므로 첫글자의 주소를 char* 에 담아라.

    
    printf("%s\n", aString);
    printf("%c\n", *aString);

    int num = 1;
    int* pNum = &num;

    printf("%d\n", *pNum);
    

    return 0;

}