#include <stdio.h>
#include <stdlib.h>

typedef struct tagBinaryTreeNode {
    struct tagBinaryTreeNode* Left;
    struct tagBinaryTreeNode* Right;
    char Data;
} BinaryTreeNode;

BinaryTreeNode* CreateNode(char newData) {
    BinaryTreeNode* newNode = (BinaryTreeNode*)malloc(sizeof(BinaryTreeNode));
    if (newNode == NULL) return NULL;
    newNode->Left = NULL;
    newNode->Right = NULL;
    newNode->Data = newData;
    return newNode;
}

void DestroyTree(BinaryTreeNode* node) {
    if (node == NULL) return;
    DestroyTree(node->Left);
    DestroyTree(node->Right);
    free(node);
}

// 전위 순회 (Pre-order: 루트 -> Left -> Right)
void PreorderPrintTree(BinaryTreeNode* node) {
    // TODO: node가 NULL이면 종료
    if (node == NULL)
        return ;
    // 1. 현재 노드(루트) 데이터 출력
    printf("%c", node->Data);
    // 2. 왼쪽 서브트리 재귀 호출
    PreorderPrintTree(node->Left);
    // 3. 오른쪽 서브트리 재귀 호출
    PreorderPrintTree(node->Right);
}

// 중위 순회 (In-order: Left -> 루트 -> Right)
void InorderPrintTree(BinaryTreeNode* node) {
    // TODO: node가 NULL이면 종료
    if (node == NULL)
        return ;
    // 1. 왼쪽 서브트리 재귀 호출
    InorderPrintTree(node->Left);
    // 2. 현재 노드(루트) 데이터 출력
    printf("%c", node->Data);
    // 3. 오른쪽 서브트리 재귀 호출
    InorderPrintTree(node->Right);
}

// 후위 순회 (Post-order: Left -> Right -> 루트)
void PostorderPrintTree(BinaryTreeNode* node) {
    // TODO: node가 NULL이면 종료
    if (node == NULL)
        return ;
    // 1. 왼쪽 서브트리 재귀 호출
    PostorderPrintTree(node->Left);
    // 2. 오른쪽 서브트리 재귀 호출
    PostorderPrintTree(node->Right);
    // 3. 현재 노드(루트) 데이터 출력
    printf("%c", node->Data);
}