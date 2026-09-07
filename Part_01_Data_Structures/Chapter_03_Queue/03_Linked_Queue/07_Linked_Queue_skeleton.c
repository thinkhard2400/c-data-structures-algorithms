#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node *next;
} Node;

typedef struct {
    Node *front;
    Node *rear;
} LinkedQueue;

// 큐 초기화
void initQueue(LinkedQueue *q) {
    // TODO 1: front와 rear를 NULL로 초기화
}

// 공백 상태 확인 (비어있으면 1, 아니면 0 반환)
int isEmpty(LinkedQueue *q) {
    // TODO 2: front가 NULL인지 검사
}

// 데이터 삽입
void enqueue(LinkedQueue *q, int value) {
    // TODO 3: 새 노드 동적 할당 및 데이터 설정
    // 큐가 비어있는 경우와 비어있지 않은 경우를 구분하여 rear 및 front 포인터 연결
}

// 데이터 제거 및 반환
int dequeue(LinkedQueue *q) {
    // TODO 4: isEmpty 검사 후, front 노드의 데이터를 보관하고 메모리 해제
    // 노드가 1개뿐이었을 경우 rear 포인터도 NULL로 처리
}

// 큐의 모든 노드 메모리 해제
void clearQueue(LinkedQueue *q) {
    // TODO 5: isEmpty일 때까지 dequeue를 반복 호출하여 모든 메모리 해제
}