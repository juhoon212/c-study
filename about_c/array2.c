#include <stdio.h>

int main(void) {

    // 선택 정렬 구현

    int aList[5] = {3, 5, 1, 2, 4};
    for (int i = 0; i < sizeof(aList) / sizeof(int); i++) {
        for (int j = i + 1; j < sizeof(aList) / sizeof(int); j++) {
            if (aList[i] > aList[j]) {

                int temp = aList[i];
                aList[i] = aList[j];
                aList[j] = temp;
            }
        }
    }

    for(int i = 0; i < sizeof(aList) / sizeof(int); i++) {
        printf("%d\n", aList[i]);  
    }
    
    return 0;
}