#include <stdio.h>
#include <stdbool.h>

int main(void) {

    FILE* pFile = fopen("/Users/yunjoohoon/Desktop/study/c++studyre/about_c/test1.txt", "rb");

    if (pFile == NULL) {
        return 0;
    }

    while (true) {
        char arr[100];

        char* pChar = fgets(arr, 100, pFile);
        if (pChar == NULL) {
            break;
        }

        printf("fgets 1sr arg : %s", arr);
    }
    
    

    fclose(pFile);
    return 0;
}