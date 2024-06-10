#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <malloc/malloc.h>

typedef struct NODE {
    char szData[64];
    struct NODE* next;

} NODE;

NODE* g_pHead = NULL;

// 연결 리스트 전체 데이터 출력
void printList(void) {

    NODE* pHead = g_pHead;
    while (pHead != NULL) {
        printf("[%p] %s, next[%p]\n", pHead, pHead->szData, pHead->next);
        pHead = pHead->next;
    }

    putchar('\n');
}

int InsertNewNode(char* pszData) {
    NODE* pNode = (NODE*)malloc(sizeof(NODE));
    memset(pNode, 0, sizeof(NODE));
    printf("pNode: %d\n", malloc_size(pNode));
    strcpy(pNode->szData, pszData);

    if(g_pHead == NULL) {
        // printf("NULL OK");
        g_pHead = pNode; // 얕은 복사
    } else {
        // printf("NULL NOT OK");
        pNode->next = g_pHead;
        g_pHead = pNode;
    }
    return 1;
}

void releaseList(void) {
    NODE* pTemp = g_pHead;
    while (pTemp != NULL) {
        NODE* pDelete = pTemp;
        pTemp = pTemp->next;
        printf("Delete: [%p] %s\n", pDelete, pDelete->szData);
        free(pDelete);
    }
}

int FindData(char* pszData) {
    NODE* pTemp = g_pHead;
    while (pTemp != NULL) {
        if(strcmp(pTemp->szData, pszData) == 0) return 1;
        pTemp = pTemp->next;
    }

    return 0;
}

int DeleteData(char* pszData) {
    NODE* pTemp = g_pHead;
    NODE* pPrev = NULL;
    while (pTemp != NULL) {
        if(strcmp(pTemp->szData, pszData) == 0) {
            // 삭제
            printf("DeleteData [%p] (): %s\n",pTemp, pTemp->szData);
            if (pPrev != NULL) {
                pPrev->next = pTemp->next;
            } else {
                // 삭제할 데이터가 첫 번쨰
                g_pHead = pTemp->next;
            }

            free(pTemp);
            return 1;
        }


        pPrev = pTemp;
        pTemp = pTemp->next;
    }

    return 0;
}

    


int main() {

    // List 테스트를 위한 코드
    InsertNewNode("TEST01");
    printList();
    InsertNewNode("TEST02");
    printList();
    InsertNewNode("TEST03");
    printList();

    if(FindData("TEST01") == 1) {
        printf("FindData(): TEST01 found\n");
    }
    if(FindData("TEST02") == 1) {
        printf("FindData(): TEST02 found\n");
    }
    if(FindData("TEST03") == 1) {
        printf("FindData(): TEST03 found\n");
    };

    DeleteData("TEST03");

    // releaseList();
    

    return 0;
}