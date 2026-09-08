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
BSTNode* BST_CreateNode(int NewData)
{
    BSTNode* newNode = (BSTNode*)malloc(sizeof(BSTNode));

    if (newNode == NULL)
        return NULL;

    newNode->Data = NewData;
    newNode->Left = NULL;
    newNode->Right = NULL;

    return newNode;
}

// 노드 삽입
void BST_InsertNode(BSTNode* Tree, BSTNode* Child)
{
    if (Tree == NULL || Child == NULL)
        return;

    if (Tree->Data > Child->Data)
    {
        if (Tree->Left == NULL)
            Tree->Left = Child;
        else
            BST_InsertNode(Tree->Left, Child);
    }
    else if (Tree->Data < Child->Data)
    {
        if (Tree->Right == NULL)
            Tree->Right = Child;
        else
            BST_InsertNode(Tree->Right, Child);
    }
    else
        return;
}

// 노드 탐색
BSTNode* BST_SearchNode(BSTNode* Tree, int Target)
{
    if (Tree == NULL)
        return NULL;

    if (Tree->Data == Target)
        return Tree;
    else
    {
        if (Tree->Data > Target)
            return BST_SearchNode(Tree->Left, Target);
        else
            return BST_SearchNode(Tree->Right, Target);
    }
}

// 노드 삭제
BSTNode* BST_RemoveNode(BSTNode* Tree, BSTNode* Parent, int Target)
{
    if (Tree == NULL)
        return NULL;

    BSTNode* Removed = NULL;

    if (Tree->Data == Target)
    {
        Removed = Tree;
        
        if (Tree->Left == NULL && Tree->Right == NULL)
        {
            if (Parent != NULL)
            {
                if (Parent->Left == Tree)
                {
                    Parent->Left = NULL;
                }
                else
                {
                    Parent->Right = NULL;
                }
            }
        }
        else if (Tree->Left == NULL && Tree->Right != NULL)
        {
            if (Parent != NULL)
            {
                if (Parent->Left == Tree)
                {
                    Parent->Left = Tree->Right;
                }
                else
                {
                    Parent->Right = Tree->Right;
                }
            }
        }
        else if (Tree->Left != NULL && Tree->Right == NULL)
        {
            if (Parent != NULL)
            {
                if (Parent->Left == Tree)
                {
                    Parent->Left = Tree->Left;
                }
                else
                {
                    Parent->Right = Tree->Left;
                }
            }
        }
        else //(Tree->Left != NULL && Tree->Right != NULL)
        {
            BSTNode* MinNode = Tree->Right;
            while (MinNode->Left != NULL)
            {
                MinNode = MinNode->Left;
            }
            Tree->Data = MinNode->Data;
            Removed = BST_RemoveNode(Tree->Right, Tree, MinNode->Data);
        }
        return Removed;
    }
    else
    {
        if (Tree->Data > Target)
        {
            return BST_RemoveNode(Tree->Left, Tree, Target);
        }
        else
        {
            return BST_RemoveNode(Tree->Right, Tree, Target);
        }
    }
}

#endif