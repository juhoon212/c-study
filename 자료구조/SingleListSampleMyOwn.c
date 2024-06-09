#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <malloc/malloc.h>

typedef struct NODE {
    char szData[64];
    struct NODE* next;
} NODE;

NODE* head = NULL;

void printList(void) {
    NODE* pHead = head;
    while (pHead != NULL) {
        printf("CUR : [%p] %s, NEXT : [%p]\n", pHead, pHead->szData, pHead->next);
        pHead = pHead->next;
    }

    putchar('\n');
}

int InsertNewNode(char* pszData) {
    // 생성
    NODE* pNode = (NODE*)malloc(sizeof(NODE));
    memset(pNode, 0, sizeof(NODE));
    strcpy(pNode->szData, pszData);

    if (head == NULL) {
        head = pNode;
    } else {
        pNode->next = head;
        head = pNode;
    }
    return 1;
}


int main(void) {

    InsertNewNode("TEST01");
    printList();
    InsertNewNode("TEST02");
    printList();
    InsertNewNode("TEST03");
    printList();

    return 0;
}