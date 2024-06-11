#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct NODE {
    char szData[64];
    struct NODE* next;
} NODE;

NODE* g_pHead = NULL;

void printList() {
    NODE* pHead = g_pHead;
    while(pHead != NULL) {
        printf("[%p] %s, next[%p]\n", pHead, pHead->szData, pHead->next);
        pHead = pHead->next;
    }

    putchar('\n');
}

int InsertNewNode(char* pszData) {

    // 새 노드 생성
    NODE* newNode = (NODE*)malloc(sizeof(NODE));
    memset(newNode, 0, sizeof(NODE));
    strcpy(newNode->szData, pszData);

    // 연결 리스트에 추가
    if (g_pHead == NULL) {
        g_pHead = newNode;
    } else {
        newNode->next = g_pHead;
        g_pHead = newNode;
    }
    return 0;
}

int main(void) {
    InsertNewNode("Hello");
    printList();

    InsertNewNode("World");
    printList();
    
    InsertNewNode("Programming");
    printList();
    return 0;
}
