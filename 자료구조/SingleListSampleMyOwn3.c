#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct NODE {
    char szData[64];
    struct NODE* next;
} NODE;

NODE g_head = { 0 }; // DUMMY HEAD
NODE* g_pTail = 0;

int isEmpty() {
    if (g_head.next == NULL) {
        return 1;
    }

    return 0;
}

int insertHead(char* pszData) {
    NODE* newNode = (NODE*)malloc(sizeof(NODE));
    memset(newNode, 0 , sizeof(NODE));
    strcpy(newNode->szData, pszData);

    if (isEmpty()) {
        // 리스트에 추가된 첫 번째 데이터 처리
        g_head.next = newNode;
        
    } else {
        g_pTail->next = newNode;
    }
    
    g_pTail = newNode;

    return 0;
}

int insertTail(char* pszData) {
    
    NODE* newNode = (NODE*)malloc(sizeof(NODE));
    memset(newNode, 0 , sizeof(NODE));
    strcpy(newNode->szData, pszData);

    

    return 0;
    
}

NODE* findNode(char* pszData) {
    
    NODE* pPrev = &g_head;
    NODE* pCur = pPrev->next;

    
    while (pPrev->next != NULL) {
        if(strcmp(pCur->szData, pszData) == 0) {
            return pPrev;
        } 

        pPrev = pPrev->next;
        pCur = pCur->next;
    }

    return 0;
}

int deleteNode(char* pszData) {

    NODE* findedNode = findNode(pszData);
    if (findedNode != 0) {
        NODE* pDelete = findedNode->next;
        findedNode->next = pDelete->next;

        printf("DELETE : [%p], %s, next[%p]\n", pDelete, pDelete->szData, pDelete->next);

        if (pDelete == g_pTail) {
            g_pTail = NULL;
        }

        free(pDelete);
    }
    
    return 0;
}

void printList() {
    NODE* pTemp = g_head.next;

    while (pTemp != NULL) {
        printf("cur: [%p], %s, next: [%p]\n", pTemp, pTemp->szData, pTemp->next);
        
        pTemp = pTemp->next;
    }

    
}

void deleteList() {
    NODE* pTemp = g_head.next;

    while (pTemp != NULL) {
        NODE* pDelete = pTemp;
        pTemp = pTemp->next;

        free(pDelete);
    }

    g_head.next = NULL;
    g_pTail = NULL;
}




int main(void) {

    insertHead("Test03");
    insertHead("Test02");
    insertHead("Test01");
    printList();

    deleteList();

    printList();

    return 0;
}