#include <stdio.h>
#include <string.h>

int TestFunc(char* pszParam) { // 함수의 이름은 주소다.

    printf("%s\n", pszParam);

    return 0;
};

int MyCmp(const void *left, const void *right) {
    return *(int*)left - *(int*)right;
}

int MyCmp2(const void *left, const void *right) {
    return strcmp(*(char**)left, *(char**)right);
};

int main(void) {

    // TestFunc("");

    // int nData = TestFunc;

    // ((int(*)(char*))nData)("");

    // return 0;

    int aList[5] = {20, 50, 10, 30, 40};
    char *bList[5] = {"안녕", "옥탑방", "오렌지", "폭탄", "차용증"};

    qsort(aList, 5, sizeof(int), MyCmp);
    qsort(bList, 5, sizeof(char*), MyCmp2);

    for (int i = 0; i < sizeof(bList) / sizeof(char* ); ++i) {
        printf("%s\n", bList[i]);
    }

    return 0;
}