#include <stdio.h>

int main(void) {

    char *aList[2] = {"안녕", "하이"};
    char *bList[2] = {"안녕", "하이"};

    for (int i = 0; i < 2; ++i) {
        printf("%s\n", aList[i]);
        printf("%s\n", bList[i]);
    }

    return 0;

}