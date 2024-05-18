#include <stdio.h>


void printUser(char(*arr)[12]) {
    
    for (int i = 0; i < sizeof(arr) / sizeof(char); i++) {
        printf("%s\n", arr[i]);
    }
}

int main(void) {

    char aListUser[2][3] = {
        {'a','b','c'}, 
        {'d','e','f'}
    };


    for (int i = 0; i < sizeof(aListUser) / sizeof(aListUser[0]); i++) {
        for (int j = 0; j < sizeof(aListUser[0]) / sizeof(char); j++) {
            printf("%c\n", aListUser[i][j]);
        }
    }

    char sznameArr[3][12] = {
        "철수",
        "영희",
        "길동"
    };

    printUser(sznameArr);

    register int nData = 10;

    

    return 0;
}

