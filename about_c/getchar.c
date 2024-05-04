#include <stdio.h>


int main(void) {

    char s1[20];
    int age;

    printf("텍스트를 입력해주세요 : ");
    scanf("%s", s1);

    for (int i = 0; i < sizeof(s1); i++) {
        getchar();
    }
    
    printf("나이를 입력해주세요 : ");
    scanf("%d", &age);
    printf("나이는 : %d\n gen : %s\n", age, s1);



    
    
    
    return 0;

}