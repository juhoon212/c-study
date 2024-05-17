#include <stdio.h>
#include <stdlib.h>
#include <malloc/malloc.h>

int main(void) {

   int i = 0, nLineCount = 0, nMaxLength = 0;
   char** ppszData = NULL;
    scanf("%d %d", &nLineCount, &nMaxLength);
    ppszData = (char**)malloc(sizeof(char*) * nLineCount);

    for (int i = 0; i < nLineCount; i++) {
        ppszData[i] = (char*)malloc(nMaxLength);
        fflush(stdin);
        fgets(ppszData[i], sizeof(ppszData[i]), stdin);
    }

    for (int i = 0; i < nLineCount; i++) {
        printf("%p %s\n", ppszData[i], ppszData[i]);
        free(ppszData[i]);
    }

    free(ppszData);

    

    return 0;
}