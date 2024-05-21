#include <stdio.h>

typedef struct USERDATA {
    
    char szName[32];
    char szPhone[32];

    struct USERDATA* pNext;

} USERDATA;

int main(void) {
    
    USERDATA userList[4] = {
        {"김어준", "1234", NULL},
        {"홍길동", "5678", NULL},
        {"임꺽정", "1212", NULL},
        {"이명박", "4321", NULL},
    };

    USERDATA* pUser = NULL;

    userList[0].pNext = &userList[1];
    userList[1].pNext = &userList[2];
    userList[2].pNext = &userList[3];
    userList[3].pNext = NULL;

    pUser = &userList[0];
    
    while (pUser != NULL) {
        printf("%s, %s\n", pUser -> szName, pUser -> szPhone);
        
        pUser = pUser -> pNext;
    }

    return 0;
}