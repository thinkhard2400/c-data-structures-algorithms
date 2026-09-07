#include <stdio.h>
#include <stdlib.h>

#define CAPACITY 5 // 실제 저장 가능 데이터 수: 4개 (1칸은 공백/포화 구분용)

typedef struct {
    int data[CAPACITY];
    int front;
    int rear;
} CircularQueue;

// 큐 초기화
void initQueue(CircularQueue *q) {
    // TODO 1: front와 rear를 0으로 초기화
    q->front = 0;
    q->rear = 0;
}

// 공백 상태 확인 (비어있으면 1, 아니면 0 반환)
int isEmpty(CircularQueue *q) {
    // TODO 2: front == rear 조건 검사
    if (q->front == q->rear)
        return 1;
    return 0;
}

// 포화 상태 확인 (가득 찼으면 1, 아니면 0 반환)
int isFull(CircularQueue *q) {
    // TODO 3: (rear + 1) % CAPACITY == front 조건 검사
    if ((q->rear+1)%CAPACITY == q->front)
        return 1;
    return 0;
}

// 데이터 삽입
void enqueue(CircularQueue *q, int value) {
    // TODO 4: isFull 검사 후, rear를 (rear + 1) % CAPACITY 로 이동시키고 데이터 저장
    if (isFull(q))
        return;
    q->rear = (q->rear+1)%CAPACITY;
    q->data[q->rear] = value;
}

// 데이터 제거 및 반환
int dequeue(CircularQueue *q) {
    // TODO 5: isEmpty 검사 후, front를 (front + 1) % CAPACITY 로 이동시키고 데이터 반환
    if (isEmpty(q))
        return -1;
    q->front = (q->front+1)%CAPACITY;
    return q->data[q->front];
}