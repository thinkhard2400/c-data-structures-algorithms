#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 100

typedef struct {
    int data[MAX_SIZE];
    int top;
} ArrayStack;

// 스택 초기화
void initStack(ArrayStack *stack) {
    // TODO 1: stack이 NULL인지 확인 후 top을 -1로 초기화
}

// 스택이 비어있는지 확인
int isEmpty(ArrayStack *stack) {
    // TODO 2: top이 -1인지 검사하여 비어있으면 1, 아니면 0 반환
    return 0;
}

// 스택이 가득 찼는지 확인
int isFull(ArrayStack *stack) {
    // TODO 3: top이 MAX_SIZE - 1 이상인지 검사
    return 0;
}

// 데이터 삽입
void push(ArrayStack *stack, int item) {
    // TODO 4: NULL 및 isFull 검사 후, top을 1 증가시키고 해당 위치에 item 저장
}

// 데이터 제거 및 반환
int pop(ArrayStack *stack) {
    // TODO 5: NULL 및 isEmpty 검사 후, top 위치의 데이터를 반환하고 top을 1 감소
    return -1;
}

// 맨 위 데이터 확인
int peek(ArrayStack *stack) {
    // TODO 6: NULL 및 isEmpty 검사 후, top 위치의 데이터 반환 (top 변형 없음)
    return -1;
}