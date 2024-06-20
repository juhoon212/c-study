#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct NODE {
    char pszData[64];
    struct NODE* prev;
    struct NODE* next;
} NODE;

NODE* g_pHead;
NODE* g_pTail;
int g_nSize;

void initList(void) {
    g_pHead = (NODE*)malloc(sizeof(NODE));
    g_pTail = (NODE*)malloc(sizeof(NODE));
    g_nSize = 0;

    memset(g_pHead, 0, sizeof(NODE));
    memset(g_pTail, 0, sizeof(NODE)); 

    strcpy(g_pHead->pszData, "HEAD");
    strcpy(g_pTail->pszData, "TAIL");
    
    g_pHead->next = g_pTail;
    g_pTail->prev = g_pHead;
}

void releaseList(void) {
    NODE* pTemp = g_pHead;

    while (pTemp != NULL) {
        NODE* pDelete = pTemp;
        pTemp = pTemp->next;

        printf("free : [%p] , %s\n", pDelete, pDelete->pszData);

        free(pDelete);
    }

    g_pHead = NULL;
    g_pTail = NULL;
    g_nSize = 0;
    printf("ReleaseList()\n");
}



void printList(void) {

    printf("printList() : g_nSize [%d] , g_pHead [%p], g_pTail [%p]\n", g_nSize, g_pHead, g_pTail);

    NODE* pTemp = g_pHead;

    while (pTemp != NULL) {
        printf("prev : [%p] , %s, next : [%p]\n", pTemp->prev, pTemp->pszData, pTemp->next);
        pTemp = pTemp->next;
    }
}

int insertAtHead(const char* pszData) {

    NODE* pNewNode = (NODE*)malloc(sizeof(NODE));
    memset(pNewNode, 0, sizeof(NODE));
    strcpy(pNewNode->pszData, pszData);

    pNewNode->next = g_pHead->next;
    pNewNode->prev = g_pHead;

    g_pHead->next = pNewNode;
    pNewNode->next->prev = pNewNode;

    g_nSize++;

    return g_nSize;
}

int insertAtTail(const char* pszData) {

    NODE* pNewNode = (NODE*)malloc(sizeof(NODE));
    memset(pNewNode, 0, sizeof(NODE));

    strcpy(pNewNode->pszData, pszData);

    pNewNode->next = g_pTail;
    pNewNode->prev = g_pTail->prev;

    g_pTail->prev = pNewNode;
    pNewNode->prev->next = pNewNode;

    return 0;
}

NODE* findNode(const char* pszData) {

    NODE* pTemp = g_pHead->next;
    
    while (pTemp != g_pTail) {
        if (strcmp(pTemp->pszData, pszData) == 0) {
            return pTemp;
        }

        pTemp = pTemp->next;
    }

    return NULL;

} 

int deleteNode(const char* pszData) {
    NODE* pNode = findNode(pszData);

    pNode->prev->next = pNode->next;
    pNode->next->prev = pNode->prev;

    printf("deleteNode() : [%p], [%s] \n",pNode, pNode->pszData);


    free(pNode);

    return 0;
}

int getSize(void) {
    return g_nSize;
}

int getLength(void) {

    return getSize();
}

int isEmpty(void) {
    return 0;
}

int main(void) {

    initList();

    insertAtHead("TEST01");
    insertAtHead("TEST02");
    insertAtHead("TEST03");

    NODE* finded = findNode("TEST01");
    printf("finded : [%p], [%s]\n", finded, finded->pszData);

    deleteNode("TEST01");

    printList();

    releaseList();

    return 0;
}