#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <memory.h>

typedef struct NODE {
    char pszData[64];
    struct NODE* next;
} NODE;

NODE DUMMY_NODE = { 0 };

int popData(NODE* pPopNode) {
    
    NODE* sp = DUMMY_NODE.next;

    if (sp == NULL) {
        return 0;
    }

    memcpy(pPopNode, sp, sizeof(NODE));
    DUMMY_NODE.next = sp->next;
    free(sp);

    return 1;
}

int insertTail(char* pszData) {
   
    NODE* pTemp = &DUMMY_NODE;
    while (pTemp->next != NULL) {
        pTemp = pTemp->next;
    }

    NODE* newNode = (NODE*)malloc(sizeof(NODE));
    memset(newNode, 0, sizeof(NODE));
    strcpy(newNode->pszData, pszData);

    pTemp->next = newNode;

    return 1;
}

void printList() {
    NODE* pTemp = DUMMY_NODE.next;
    while (pTemp != NULL) {
        printf("cur: [%p], %s, next: [%p]\n", pTemp, pTemp->pszData, pTemp->next);
        pTemp = pTemp->next;
    }
}

int enqueue(char* pszData) {
    return insertTail(pszData);
}

int dequeue(NODE* pGetNode) {
    return popData(pGetNode);
}

int main() {
    enqueue("TEST01");
    enqueue("TEST02");
    enqueue("TEST03");

    NODE node = { 0 };

    dequeue(&node);

    printList();
    return 0;
}
