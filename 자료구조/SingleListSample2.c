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
    while (g_pHead != NULL) {
        printf("[%p] %s, next[%p]\n", g_pHead, g_pHead->szData, g_pHead->next);
        g_pHead = g_pHead->next;
    }

    putchar('\n');
}

int InsertNewNode(char* pszData) {
    NODE* pNode = (NODE*)malloc(sizeof(NODE));
    memset(pNode, 0, sizeof(NODE));
    printf("pNode: %d\n", malloc_size(pNode));
    strcpy(pNode->szData, pszData);

    if(g_pHead == NULL) {
        printf("NULL OK");
        g_pHead = pNode; // 얕은 복사
    } else {
        printf("NULL NOT OK");
        pNode->next = g_pHead;
        g_pHead = pNode;
    }
    return 1;
}

    


int main() {

    // List 테스트를 위한 코드
    InsertNewNode("TEST01");
    printList();
    InsertNewNode("TEST02");
    printList();
    InsertNewNode("TEST03");
    printList();
    

    return 0;
}