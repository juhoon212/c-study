#include <stdio.h>
#include <stdlib.h>
// 주소를 반환하는 사용자 정의 함수 선언 및 정의

char* GetName(void) {

    char* pszName = 0;

    pszName = (char*)calloc(32, sizeof(char));
    printf("%s\n", "이름을 입력하세요: ");

    fgets(pszName, sizeof(char) * 32, stdin);
    return pszName;
}

int main(int argc, char* argv[]) {

    char* pszName = NULL;

    // 이름이 저장된 동적 할당된 메모리의 주소를 반환받는다.
    pszName = GetName();
    printf("당신의 이름은 %s입니다", pszName);

    free(pszName);
    return 0;
}