#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {

    char szSrcBuf[12] = {"Hello"};
    char szDstBuf[12] = {0};
    char* pszData = (char*)malloc(sizeof(char) * 12);


    //Deep Copy => 내용 복사
    memcpy(szDstBuf, szSrcBuf, sizeof(szSrcBuf));

    // shallow copy => 주소를 복사
    // pszData = szSrcBuf;
    memcpy(pszData, szDstBuf, sizeof(szDstBuf));

    puts(pszData);
    free(pszData);

    char szSrcBuf2[12] = {"Hello"};
    char szDstBuf2[12] = {0};

    memcpy(szDstBuf2, szSrcBuf2, sizeof(szSrcBuf2));

    if (memcmp(szSrcBuf2, szDstBuf2, sizeof(szSrcBuf2)) == 0) {
        puts("same");
    } else {
        puts("diff");
    }

    

    return 0;
}