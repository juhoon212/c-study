#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct NODE {
    
    void* pData;
    struct NODE* prev;
    struct NODE* next;

} NODE;

typedef struct USERDATA {
    char szName[64];
    char szPhone[64];
} USERDATA;

int main(void) {
    return 0;
}