#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node *next;
} Node;

// 맨 앞에 노드 삽입
void insertFirst(Node **head, int data) {
    if (head == NULL) return;

    Node *newNode = (Node *)malloc(sizeof(Node));
    if (newNode == NULL) return;

    newNode->data = data;
    newNode->next = *head;
    *head = newNode;
}

// 특정 데이터 노드 삭제
void deleteNode(Node **head, int data) {
    if (head == NULL || *head == NULL) return;

    Node *temp = *head;
    Node *prev = NULL;

    // 1. 첫 번째 노드를 삭제하는 경우
    if (temp->data == data) {
        *head = temp->next;
        free(temp);
        return;
    }

    // 2. 삭제할 노드 탐색
    while (temp != NULL && temp->data != data) {
        prev = temp;
        temp = temp->next;
    }

    // 데이터가 없는 경우
    if (temp == NULL) return;

    // 3. 연결 재설정 및 메모리 해제
    prev->next = temp->next;
    free(temp);
}

// 리스트 전체 출력
void printList(Node *head) {
    Node *curr = head;
    printf("List: ");
    while (curr != NULL) {
        printf("%d -> ", curr->data);
        curr = curr->next;
    }
    printf("NULL\n");
}