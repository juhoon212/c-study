#include <stdio.h>
#include <stdlib.h>

/*
    __cdecl => caller , stack
    __stdcall => callee , stack
    __fastcall => callee, stack + register
    
    fastcall인지 stdcall인지는 컴파일러가 알아서 결정한다.
*/

int __cdecl GetMax(int a, int b, int c) {;
    
    int nMax = 0;
    if (b > nMax) nMax = b;
    if (c > nMax) nMax = c;
    return nMax;
};


int main(void) {

    int nResult = 10;
    GetMax(1,2,3);

    return 0;
};

