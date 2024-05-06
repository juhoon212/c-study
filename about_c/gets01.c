#include <stdio.h>

int main(void) {
    int nAge = 0;
    printf("나이를 입력하세요: ");
    scanf("%d%*c", &nAge);

    char szName[12] = {0};
    // getchar();  buffer에 \n 즉 엔터가 남아있으면 넘어가버리므로 버퍼 안의 \n을 제거
    // 또다른 방법
    // fflush(stdin); 
    printf("이름을 입력하세요 : ");
    // char* fgets(char* str, int num, FILE* stream);
    fgets(szName, sizeof(szName), stdin); // Buffer에 들어있는 것이 없으므로 Buffer 공간을 채우려고 입력을 받는다. stdin 표준 입출력

    printf("%d, %s\n", nAge, szName);

    return 0;
}