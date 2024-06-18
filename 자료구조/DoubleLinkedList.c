#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct NODE {
    char* pszData;
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

}

void releaseList(void) {
    
}

void printList(void) {
    
}

int insertAtHead(const char* pszData) {
    return 0;
}

int insertAtTail(const char* pszData) {
    return 0;
}

NODE* findNode(const char* pszData) {
    return NULL;

} 

int deleteNode(const char* pszData) {
    NODE* pNode = findNode(pszData);

    return 0;
}

int getSize(void) {
    return g_nSize;
}

int getLength(void) {

    return getSize();
}

int main(void) {

    

    return 0;
}