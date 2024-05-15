#include <stdio.h>
#include <stdlib.h>
#include <malloc/malloc.h>

int main(void) {

    int aList[3] = {10, 20, 30};
    int *paList = aList;

    int nTotal = 0;
    for (int i = 0; i < sizeof(aList) / sizeof(int); i++) {
        nTotal += aList[i];
    }

    printf("%d\n", nTotal);

    nTotal = 0;
    
    while (paList < aList + 3) {
        printf("%d\n", *paList);
        paList++;
    }

    

    

    
    
    
    return 0;
}