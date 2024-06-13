#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <memory.h>

typedef struct NODE {
    char pszData[64];
    struct NODE* next;
} NODE;

NODE g_head = { 0 };

int insertAtHead(char* pszData) {
    NODE* newNode = (NODE*)malloc(sizeof(NODE));
    memset(newNode, 0 , sizeof(NODE));
    strcpy(newNode->pszData, pszData);

    NODE* pTemp = g_head.next;
    if (pTemp == NULL) {
        g_head.next = newNode;
    }else {
        newNode->next = pTemp;
        g_head.next = newNode;
    }
    return 0;
}

void pushData(char* pszData) {
    insertAtHead(pszData);
}

int popData(NODE* pPopNode) {

    NODE* sp = g_head.next;
    if (sp == NULL) {
        return 0;
    }

    memcpy(pPopNode, sp, sizeof(NODE));

    g_head.next = sp->next;
    free(sp);

    return 1;
}

void printList() {
    NODE* pTemp = g_head.next;
    while (pTemp != NULL) {
        printf("cur: [%p], %s, next: [%p]\n", pTemp, pTemp->pszData, pTemp->next);
        pTemp = pTemp->next;
    }
}

int main(void) {

    insertAtHead("Test03");
    insertAtHead("Test02");
    insertAtHead("Test01");

    NODE node = { 0 };

    printList();

    popData(&node);
    printf("pop: %s\n", node.pszData);

    printList();

    return 0;
}