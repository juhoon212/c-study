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

NODE* findMinNode(NODE* node) {
    NODE* pTemp = node;
    while (pTemp->left != NULL) {
        pTemp = pTemp->left;
    }
    return pTemp;
}

NODE* deleteNode(NODE* node, int data) {
    if (node == NULL) {
        return NULL;
    }
    NODE* pTemp = NULL;
    // TODO 다시 구현하기
    // 삭제할 노드를 찾았을 때
    if (node->data == data) {
        // 자식이 둘다 있을 때(left, right)
        if (node->left != NULL && node->right != NULL) {
            // 둘중 누가 작은지 알아내서 작은것을 본래의 노드와 연결
            // 바로 다음 자식노드의 가장 작은 노드 반환
            pTemp = findMinNode(node->right);
            // 찾은 노드의 값을 삭제하려는 노드에 복사
            node->data = pTemp->data;
            // pTemp의 데이터를 삭제하러 재귀로 들어감
            node->right = deleteNode(node->right, pTemp->data);
        } else {
            // 자식이 하나만 있을 때 && 자식이 없을 때
            // 자식이 하나만 있을 때
            pTemp = (node->left == NULL) ? node->right : node->left;
            free(node);
            return pTemp;
        }
        // TODO node->left && node->right 디버깅 해보기
    } else { // 아닐 때
        if (data < node->data) {
            node->left = deleteNode(node->left, data);
        } else {
            node->right = deleteNode(node->right, data);
        }
    }

    return node;
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
    insertNode(2);
    insertNode(5);
    insertNode(12);
    insertNode(15);
    deleteNode(root,10);

    inOrderPrintTree(root);

    return 0;
}