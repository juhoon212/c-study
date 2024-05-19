#include <stdio.h>
#include <string.h>

void MyStrcpy(char* szBufferDst, int length, char* szBufferSrc) {

    strncpy(szBufferDst, szBufferSrc, length);
}


int main(int argc, char* argv[]) {
    
    char szBufferSrc[12] = {"TestString"};
    char szBufferDst[12] = {0};

    MyStrcpy(szBufferDst, sizeof(szBufferDst), szBufferSrc);

    puts(szBufferDst);

    return 0;
}