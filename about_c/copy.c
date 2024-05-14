#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {

    char szSrcBuf[12] = {"Hello"};
    char szDstBuf[12] = {0};
    char* pszData = NULL;

    //Deep Copy => 내용 복사
    memcpy(szDstBuf, szSrcBuf, sizeof(szSrcBuf));

    // shallow copy => 주소를 복사
    pszData = szSrcBuf;

    pszData[0] = 'x';

    printf("%s\n", pszData);
    printf("%s\n", szSrcBuf);
    printf("%p\n", szSrcBuf);
    
    printf("%p\n", pszData);

    

    return 0;
}