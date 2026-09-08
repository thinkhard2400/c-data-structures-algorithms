#include <stdio.h>
#include <stdlib.h>

typedef struct tagDisjointSet {
    struct tagDisjointSet* Parent; // 부모 노드를 가리키는 포인터
    char Data;                     // 노드의 데이터
} DisjointSet;

// 1. 집합(노드) 생성
DisjointSet* MakeSet(char newData) {
    DisjointSet* newNode = (DisjointSet*)malloc(sizeof(DisjointSet));
    if (newNode == NULL) return NULL;
    
    newNode->Parent = newNode; // 초기에는 자기 자신이 부모(루트)
    newNode->Data = newData;
    return newNode;
}

// 2. 집합 메모리 해제
void DestroySet(DisjointSet* Set) {
    free(Set);
}

// 3. FindSet: 입력받은 Node가 속한 집합의 대표(루트) 노드를 찾아 반환
DisjointSet* FindSet(DisjointSet* Node) {
    // TODO: Node의 Parent가 자기 자신(Node)일 때까지 재귀적으로 부모를 따라 올라갑니다.
    if (Node == NULL)
        return NULL;

    DisjointSet* temp = Node;
    while (temp->Parent != temp)
    {
        temp = temp->Parent;
    }
    return temp;
}

// 4. UnionSet: Set1과 Set2 두 집합을 하나로 합침
void UnionSet(DisjointSet* Set1, DisjointSet* Set2) {
    // TODO: Set1의 루트와 Set2의 루트를 찾은 뒤, 한쪽 루트의 Parent를 다른 쪽 루트로 지정합니다.
    if (Set1 == NULL || Set2 == NULL)
        return ;

    DisjointSet* temp1 = FindSet(Set1);
    DisjointSet* temp2 = FindSet(Set2);
    if (temp1 != temp2)
        temp1->Parent = temp2;
}