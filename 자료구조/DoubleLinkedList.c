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

    int i = 0;
    printf("printList() : g_nSize [%d] , g_pHead [%p], g_pTail [%p]\n", g_nSize, g_pHead, g_pTail);

    NODE* pTemp = g_pHead;

    while (pTemp != NULL) {
       if (pTemp == g_pHead || pTemp == g_pTail) {
            printf("[%p] %p, %s [%p]\n", pTemp->prev, pTemp, pTemp->pszData, pTemp->next);
       } else {
            printf("Index: [%d] [%p] %p, %s [%p]\n", i, pTemp->prev, pTemp, pTemp->pszData, pTemp->next);
            i++;
       }
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

void insertBefore(NODE* pDstNode, const char* pszData) {

    NODE* pPrev = pDstNode->prev;

    // newNode 생성
    NODE* pNewNode = (NODE*)malloc(sizeof(NODE));
    memset(pNewNode, 0, sizeof(NODE));
    strcpy(pNewNode->pszData, pszData);

    pNewNode->prev = pDstNode->prev;
    pNewNode->next = pDstNode;

    pDstNode->prev = pNewNode;
    pPrev->next = pNewNode;

    g_nSize++;
}

int insertAt(int idx, const char* pszData) {
   int i = 0;
   NODE* pTemp = g_pHead->next;
   while (pTemp != g_pTail) {
        if (i == idx) {
            insertBefore(pTemp, pszData);
            return 1;
        }

        pTemp = pTemp->next;
        i++;
   }

   // pTemp가 g_pTail이면 insertAtTail() 호출
   insertAtTail(pszData);
   return 0;
}

int deleteNode(const char* pszData) {
    NODE* pNode = findNode(pszData);

    pNode->prev->next = pNode->next;
    pNode->next->prev = pNode->prev;

    printf("deleteNode() : [%p], [%s] \n",pNode, pNode->pszData);


    free(pNode);


    g_nSize--;
    return 0;
}

NODE* getAt(int idx) {
    int i = 0;
    NODE* pTemp = g_pHead->next;

    while (pTemp != g_pTail) {
        
        if (i == idx) {
            return pTemp;
        }

        pTemp = pTemp->next;
        i++;
    }

    return NULL;
}

int getSize(void) {
    return g_nSize;
}

int getLength(void) {

    return getSize();
}

int isEmpty(void) {
    if (g_nSize == 0) {
        return 0;
    }

    return 1;
}

int main(void) {

    initList();

    insertAtTail("TEST01");
    insertAtTail("TEST02");
    insertAtTail("TEST03");

    insertAt(0, "TEST AT 00");
    printList();

    insertAt(2, "TEST AT 02");
    printList();

    insertAt(4, "TEST AT 02");
    printList();

    insertAt(10, "TEST AT 10");
    printList();

    NODE* pNode = getAt(0);
    if (pNode) {
        printf("getAt(%d): %s\n", 0, pNode->pszData);
    } else {
        printf("getAt(%d): NULL\n", 0);
    }

    pNode = getAt(3);

    if (pNode) {
        printf("getAt(%d): %s\n", 3, pNode->pszData);
    } else {
        printf("getAt(%d): NULL\n", 3);
    }

    pNode = getAt(6);

    if (pNode) {
        printf("getAt(%d): %s\n", 6, pNode->pszData);
    } else {
        printf("getAt(%d): NULL\n", 6);
    }

    pNode = getAt(7);

    if (pNode) {
        printf("getAt(%d): %s\n", 7, pNode->pszData);
    } else {
        printf("getAt(%d): NULL\n", 7);
    }

    printList();
    releaseList();

    return 0;
}