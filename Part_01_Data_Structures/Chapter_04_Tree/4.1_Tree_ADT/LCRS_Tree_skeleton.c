#include <stdio.h>
#include <stdlib.h>

typedef struct tagLCRSNode {
    struct tagLCRSNode* LeftChild;
    struct tagLCRSNode* RightSibling;
    char Data;
} LCRSNode;

// 노드 생성
LCRSNode* CreateNode(char newData) {
    // TODO: 동적 할당 후 Data 설정 및 포인터 초기화
}

// 자식 노드 추가
void AddChildNode(LCRSNode* parent, LCRSNode* child) {
    // TODO: parent에 자식이 없으면 LeftChild로 연결
    // 자식이 이미 있으면 기존 자식의 가장 마지막 RightSibling을 찾아서 연결
}

// 트리 출력 (재귀적으로 레벨에 맞춰 들여쓰기 출력)
void PrintTree(LCRSNode* node, int depth) {
    // TODO: depth만큼 공백을 출력한 뒤 Data 출력
    // 자식 노드(LeftChild)와 형제 노드(RightSibling) 순회
}

// 트리 메모리 해제
void DestroyTree(LCRSNode* node) {
    // TODO: 자식과 형제 노드를 재귀적으로 모두 해제
}