#ifndef BINARY_SEARCH_TREE_H
#define BINARY_SEARCH_TREE_H

#include <stdio.h>
#include <stdlib.h>

typedef struct tagBSTNode {
    int Data;
    struct tagBSTNode* Left;
    struct tagBSTNode* Right;
} BSTNode;

// 노드 생성
BSTNode* BST_CreateNode(int NewData);

// 노드 삽입
void BST_InsertNode(BSTNode* Tree, BSTNode* Child);

// 노드 탐색
BSTNode* BST_SearchNode(BSTNode* Tree, int Target);

// 노드 삭제
BSTNode* BST_RemoveNode(BSTNode* Tree, BSTNode* Parent, int Target);

#endif