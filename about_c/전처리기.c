#include <stdio.h>
#define ADD(a,b)    (a + b)
#define STRING(a)   #a // #은 인수가 무엇이든 모두 문자열로 만들어준다.
#define PASTER(a,b) a##b // ##은 두 인자를 하나의 문자열로 합쳐준다.

int main(void) {

    printf("%d\n", ADD(2,3));
    
    STRING(nData); 
    
    int nData2 = 3;
    printf("%d\n", PASTER(nDa, ta2));
    
    return 0;
}