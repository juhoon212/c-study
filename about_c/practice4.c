#include <stdio.h>

int main(void) {
    // 1
    /*
     char s[3] = {0};
     printf("세글자를 입력하세요: ");
     s[0] = getchar();
     s[1] = getchar();
     s[2] = getchar();

     printf("두번째 문자는 = %c\n", s[1]);
    */

    // 2
    printf("아무거나 입력해주세요: ");
    char a[] = {0};
    // fgets(a, 32, stdin);
    scanf("%s", a);

    printf("%s\n", a); // %s는 주소값을 받고 그 주소값에 안에 저장되어 있는 문자를 시작으로 \0이 나올 때까지의 문자열을 출력
                        // %c 는 실제 문자를 받아서 그 문자를 출력

    
    
    
    
    
    return 0;
}