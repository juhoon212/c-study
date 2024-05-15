#include <stdio.h>
#include <stdlib.h>
#include <malloc/malloc.h>

int main() {

    char* pszBuffer = NULL;
    char* pszNewBuffer = NULL;

    pszBuffer = (char*)malloc(12);
    sprintf(pszBuffer, "%s", "TestString");
    printf("[%p] %d %s\n", pszBuffer, malloc_size(pszBuffer), pszBuffer); // windows: _msize => mac: malloc_size

    pszNewBuffer = (char*)realloc(pszBuffer, 32);

    if (pszNewBuffer == NULL) {
        free(pszBuffer);
    }

    sprintf(pszNewBuffer, "%s", "TestStringData");
    printf("[%p] %d %s\n", pszNewBuffer, malloc_size(pszNewBuffer), pszNewBuffer);

    free(pszNewBuffer);
    return 0;
}