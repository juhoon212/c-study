#include <stdio.h>

int main(void) {

    char szBuffer[128] = {0};
    printf("Input your name: ");
    fgets(szBuffer, 128, stdin);

    printf("your name is ");
    fputs(szBuffer, stdout); // fputs(const char * __restrict, FILE * __restrict)

    int nInput = 0;
    printf("Input number: ");
    
    scanf("%d", &nInput);
    printf("%d\n", nInput);

    

    return 0;
}