#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node *prev;
    struct Node *next;
} Node;

// 맨 뒤에 노드 삽입 (환형 연결 유지)
void insertLast(Node **head, int data) {
    if (head == NULL) return;

    Node *newNode = (Node *)malloc(sizeof(Node));
    if (newNode == NULL) return;
    newNode->data = data;

    // 1. 공백 리스트인 경우
    if (*head == NULL) {
        newNode->next = newNode;
        newNode->prev = newNode;
        *head = newNode;
        return;
    }

    // 2. 노드가 이미 존재하는 경우 (마지막 노드는 (*head)->prev)
    Node *tail = (*head)->prev;

    newNode->next = *head;
    newNode->prev = tail;
    tail->next = newNode;
    (*head)->prev = newNode;
}

// 특정 노드 삭제
void deleteNode(Node **head, Node *removeNode) {
    if (head == NULL || *head == NULL || removeNode == NULL) return;

    // 1. 노드가 1개만 존재하는 경우
    if (removeNode->next == removeNode) {
        *head = NULL;
    } else {
        // 2. 삭제할 노드가 head인 경우 위치 이동
        if (removeNode == *head) {
            *head = removeNode->next;
        }
        // 3. 양옆 노드 고리 재연결
        removeNode->prev->next = removeNode->next;
        removeNode->next->prev = removeNode->prev;
    }

    free(removeNode);
}

// 리스트 순회 및 출력
void printList(Node *head) {
    if (head == NULL) {
        printf("List: EMPTY\n");
        return;
    }

    Node *curr = head;
    printf("List: ");
    do {
        printf("%d <-> ", curr->data);
        curr = curr->next;
    } while (curr != head);
    printf("(head: %d)\n", head->data);
}