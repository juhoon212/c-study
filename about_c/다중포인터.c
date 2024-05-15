#include <stdio.h>

int main(void) {

    int nData = 10;
    int* pnData = &nData;
    int** ppnData = &pnData;
    int*** pppnData = &ppnData;

    printf("[%p]\n", **pppnData);
    printf("[%p]\n", *ppnData);
    printf("[%p]\n", pnData);

    char* apszList[3] = {"Test", "String", "Data"};
    printf("%c\n", apszList[0]);

    char** ppszList = apszList;

    char szBuffer[32] = {"TestString"};
    char *pszBuffer = szBuffer;

    printf("%c\n", **apszList);
    printf("%c\n", *apszList[1]);
    printf("%c\n", *pszBuffer);

    printf("%s\n", apszList[0]);
    printf("%s\n", *(ppszList + 1));
    
    


    return 0;
}