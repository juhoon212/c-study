#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct NODE {

    int data;
    struct NODE* left;
    struct NODE* right;
}NODE;

NODE* root;

int insertNode(int data) {
   
    NODE* newNode = (NODE*)malloc(sizeof(NODE));
    memset(newNode, 0, sizeof(NODE));
    newNode->data = data;

    if (root == NULL) {
        root = newNode;
        return 1;
    }

    NODE* pTemp = root;
    
    while (pTemp != NULL) {
       if (data < pTemp->data) {
            if (pTemp -> left == NULL) {
                pTemp->left = newNode;
                break;
            } else {
                pTemp = pTemp->left;
                continue;
            } 
       } else if (data > pTemp->data) {
            if (pTemp->right == NULL) {
                pTemp->right = newNode;
                break;
            } else {
                pTemp = pTemp->right;
                continue;
            }
       }
    }

    return 1;
}

void preOrderPrintTree(NODE* node) {
    if (node != NULL) {
        preOrderPrintTree(node->left);
        printf("cur : [%p], data : %d\n", node, node->data);
        preOrderPrintTree(node->right);
    } else {
        return;
    }
}



// TODO 다시 구현
int main(void) {
    insertNode(4);
    insertNode(3);
    insertNode(2);
    insertNode(1);

    preOrderPrintTree(root);

    return 0;
}