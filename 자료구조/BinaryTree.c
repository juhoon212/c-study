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

void inOrderPrintTree(NODE* node) {
    if (node != NULL) {
        inOrderPrintTree(node->left);
        printf("cur : [%p], data : %d\n", node, node->data);
        inOrderPrintTree(node->right);
    } else {
        return;
    }
}

NODE* findNode(NODE* root, int data) {

    if (root == NULL) {
        return NULL;
    }
    
    if (data < root->data) {
        findNode(root->left, data);
    } else if (data > root->data) {
        findNode(root->right, data);
    } else {
        return root;
    }

    return NULL;
}

NODE* findMinNode() {

}

NODE* deleteNode(NODE* node, int data) {
    if (node == NULL) {
        return NULL;
    }

    // 삭제할 노드를 찾았을 때
    if (node->data == data) {
        // 자식 노드가 있는지 없는지 확인
        NODE* deleteNode = node;
        NODE* pTemp = NULL;
        // 자식이 둘다 있을 때(left, right)
        if (node->left != NULL && node->right != NULL) {
            // 둘중 누가 작은지 알아내서 작은것을 본래의 노드와 연결
            
        }
    } else { // 아닐 때
        if (data < node->data) {
            deleteNode(node->left, data);
        } else {
            deleteNode(node->right, data);
        }

        return node
    }
}



// TODO 다시 구현
int main(void) {
    insertNode(20);
    insertNode(10);
    insertNode(32);
    insertNode(4);
    insertNode(13);
    insertNode(25);
    insertNode(55);

    inOrderPrintTree(root);

    return 0;
}