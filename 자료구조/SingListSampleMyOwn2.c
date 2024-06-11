#include <string.h>
#include <stdio.h>
#include <stdlib.h>

typedef struct NODE {
    char szData[64];
    struct NODE* next;
} NODE;

NODE g_head = { 0 };

int isEmpty() {

    if (g_head.next == NULL) {
        return 1;
    }

    return 0;
}

int insertAtHead(char* pszData) {
    NODE* newNode = (NODE*)malloc(sizeof(NODE));
    memset(newNode, 0, sizeof(NODE));
    strcpy(newNode->szData, pszData);

    if (isEmpty()) {
        g_head.next = newNode;
    } else {
        newNode->next = g_head.next;
        g_head.next = newNode;
    }

    return 1;
}

int insertAtTail(char* pszData) {
    // 마지막 노드를 찾는다
    NODE* pTemp = &g_head;
    while (pTemp->next != 0) {
        pTemp = pTemp->next;
    }
     
    NODE* newNode = (NODE*)malloc(sizeof(NODE));
    memset(newNode, 0, sizeof(NODE));
    strcpy(newNode->szData, pszData);

    pTemp->next = newNode;

    return 0;
}

int releaseList(void) {
    
    printf("Release List()\n");
    NODE* pTemp = g_head.next;

    while (pTemp != NULL) {
        NODE* pDelete = pTemp;
        pTemp = pTemp->next;
    
        printf("Delete: [%p] %s\n", pDelete, pDelete->szData);
        free(pDelete);
    }
    g_head.next = NULL;

    return 0;
}

NODE* findData(char* pszData) {
    NODE* pCur = g_head.next;
    NODE* pPrev = &g_head;

    while (pCur != NULL) {
        if (strcmp(pCur->szData, pszData) == 0) {
            return pPrev;
        }
        pCur = pCur->next;
        pPrev = pPrev->next;
    }

    return 0;
}

int deleteData(char* pszData) {
    NODE* pPrev = findData(pszData);

    if(pPrev != 0) {
        NODE* pDelete = pPrev->next;
        pPrev->next = pDelete->next;

        printf("DeleteData(): %s\n", pDelete->szData);
        free(pDelete);
        return 1;
    }

    return 0;
}

void printList() {
    NODE* pTemp = g_head.next;
    while (pTemp != NULL) {
        printf("cur : [%p],%s , next: [%p]\n", pTemp, pTemp->szData, pTemp->next);
        pTemp = pTemp->next;
    }
    
}

int main(void) {
    insertAtHead("TEST03");
    insertAtHead("TEST02");
    insertAtHead("TEST01");

    deleteData("TEST01");
    printList();
    releaseList();

    insertAtHead("TEST03");
    insertAtHead("TEST02");
    insertAtHead("TEST01");

    printList();
    releaseList();

    return 0;
}

