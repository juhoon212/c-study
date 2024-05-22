#include <stdio.h>

typedef struct _USERDATA {
    char szName[16];
    char szPhone[16];
} USERDATA;

int main(void) {

    // 'w' -> 무조건 생성, 이미 존재하면 삭제하고 생성
    // FILE* fp = fopen("Test.txt", "w");

    // fprintf(fp, "Hello FILE I/O\n");

    // fclose(fp);

    FILE* fp = NULL;

    USERDATA UserData = {"Ho-sung", "123-1234"};

    fp = fopen("Test.txt", "wb");

    if (fp == NULL) return 1;

    fwrite(&UserData, sizeof(USERDATA), 1, fp);
    fclose(fp);



    return 0;
}