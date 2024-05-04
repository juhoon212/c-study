#include <stdio.h>

int main(void) {

    char str[7] = "coding"; // 문자열 끝에는 \0 즉 NULL 문자열이 들어가야 끝남

    char str2[] = "coding";
    printf("%s\n", str2);
    printf("%d\n", (unsigned int)sizeof( str2));
    printf("%s\n", str);
    
    for (int i = 0; i < sizeof(str2); i++) {
        printf("%c\n", str2[i]);
    }

    char str3[] = {'c', 'o', 'd', 'i', 'n', 'g', '\0'};
    char str4[] = {'c', 'o', 'd', 'i', 'n', 'g'}; //str4 = coding%        
    printf("str3 = %s\n", str3);
    printf("str4 = %s", str4);

    return 0;
}