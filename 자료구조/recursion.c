#include <stdio.h>

int test(int a) {
    // for(a = 5; 조건 ; a-1)
    if (a <= 0) {
        return 0;
    }

    printf("test(%d)\n", a);
    return test(a - 1);
}


int main(void) {
    test(5);

    return 0;
}