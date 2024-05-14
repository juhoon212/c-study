#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {

    // 동적 할당 => Heap , 반환해야 함 => 언제?, 어디서?
    // void* malloc(size_t size)

    int *pList = NULL, i = 0;

    pList = (int*)malloc(sizeof(int) * 3); // 속도가 좀 느리다. 
    memset(pList, 0, sizeof(int) * 3); // pList를 int 3개만큼 0으로 초기화.

    pList[0] = 10;
    pList[1] = 20;
    pList[2] = 30;

    for (int i = 0; i < 3; i++) {
        printf("%d\n", pList[i]);
    }

    free(pList);

    char* pszData = NULL;
    int input = 0;

    printf("Input Length : ");
    scanf("%d", &input);

    pszData = (char*)calloc(input, sizeof(char));

    fflush(stdin);

    fgets(pszData, input + 1, stdin);
    puts(pszData);

    free(pszData);

    // TODO realloc() 공부

    
    
    
    return 0;
}