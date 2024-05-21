#include <stdio.h>
#include <string.h>

//구조체: 서로 같거나 다른 형식들의 연속된 '집합체'


typedef struct USERDATA {

    int nHeight;
    char szName[12];
    char szPhone[12];
    unsigned char sex;
} USERDATA;

int main(void) {

    
    USERDATA a;
    a.nHeight = 180;

    strncpy(a.szName, "Ho-sung", sizeof(a.szName));
    strncpy(a.szPhone, "123-1231-123", sizeof(a.szPhone));
    a.sex = 'M';

    char buffer[sizeof(USERDATA)];
    USERDATA* pData = (USERDATA*)buffer;
    pData -> nHeight = 180;
    strncpy(pData -> szName, "Ho-sung", sizeof(pData->szName));
    strncpy(pData -> szPhone, "123-123-123", sizeof(pData->szPhone));
    pData -> sex = 'M';

    printf("키 : %d , 이름: %s, 전화번호: %s , 성별: %c\n", pData -> nHeight,pData -> szName, pData -> szPhone, pData -> sex );
    

    return 0;
}