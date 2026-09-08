#include <stdio.h>
#include <stdlib.h>

// 이진 트리 노드 구조체
typedef struct tagBinaryTreeNode {
    struct tagBinaryTreeNode* Left;   // 왼쪽 자식
    struct tagBinaryTreeNode* Right;  // 오른쪽 자식
    char Data;                        // 데이터
} BinaryTreeNode;

// 노드 생성
BinaryTreeNode* CreateNode(char newData) {
    // TODO: 동적 할당 후 Data 설정 및 Left, Right 포인터 NULL 초기화
    BinaryTreeNode* newNode = (BinaryTreeNode*)malloc(sizeof(BinaryTreeNode));

    if (newNode == NULL)
        return NULL;
    newNode->Data = newData;
    newNode->Left = NULL;
    newNode->Right = NULL;
    
    return newNode;
}

// 트리 메모리 해제 (후위 순회 방식)
void DestroyTree(BinaryTreeNode* node) {
    // TODO: 왼쪽 자식, 오른쪽 자식을 재귀적으로 먼저 해제한 후 자신을 free
    if (node == NULL)
        return ;
    
    DestroyTree(node->Left);
    DestroyTree(node->Right);
    free(node);
}