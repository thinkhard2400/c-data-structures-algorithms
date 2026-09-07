#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node *next;
} Node;

typedef struct {
    Node *top;
} LinkedListStack;

// 스택 초기화
void initStack(LinkedListStack *stack) {
    // TODO 1: stack NULL 검사 및 top 포인터를 NULL로 설정
    if (stack == NULL)
        return;
    stack->top = NULL;
}

// 스택이 비어있는지 확인
int isEmpty(LinkedListStack *stack) {
    // TODO 2: stack NULL 검사 및 top이 NULL인지 확인하여 반환 (1 또는 0)
    if (stack == NULL)
        return 1;
    return 0;
}

// 데이터 삽입
void push(LinkedListStack *stack, int item) {
    // TODO 3: stack NULL 검사 및 newNode 동적 할당 (malloc NULL 검사 포함)
    if (stack == NULL)
        return;
    Node* newNode = (Node*)malloc(sizeof(Node));
    if (newNode == NULL)
        return;
    // TODO 4: newNode의 data 저장, next를 기존 stack->top으로 설정 후 stack->top을 newNode로 변경
    newNode->data = item;
    newNode->next = stack->top;
    stack->top = newNode;
}

// 데이터 제거 및 반환
int pop(LinkedListStack *stack) {
    // TODO 5: stack NULL 및 isEmpty 검사
    if (stack == NULL || isEmpty(stack) == 1)
        return -1;
    // TODO 6: 임시 포인터(temp)에 top 저장, 반환할 data 복사, top을 top->next로 이동 후 free(temp) 수행
    Node* temp;
    temp = stack->top;
    int result;
    result = stack->top->data;
    stack->top = stack->top->next;
    free(temp);
    return result;
}

// 맨 위 데이터 확인
int peek(LinkedListStack *stack) {
    // TODO 7: stack NULL 및 isEmpty 검사 후 top->data 반환
    if (stack == NULL || isEmpty(stack) == 1)
        return -1;
    int result;
    result = stack->top->data;
    return result;
}

// 스택의 모든 노드 메모리 해제
void clearStack(LinkedListStack *stack) {
    // TODO 8: 스택이 비어있을 때까지 pop 연산을 반복 수행하여 모든 메모리 해제
    if (stack == NULL)
        return;
    while (!isEmpty(stack))
    {
        pop(stack);
    }
}