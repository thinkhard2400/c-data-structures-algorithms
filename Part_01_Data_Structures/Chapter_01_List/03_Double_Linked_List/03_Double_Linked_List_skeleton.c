#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node *prev;
    struct Node *next;
} Node;

// 맨 앞에 노드 삽입
void insertFirst(Node **head, int data) {
    // TODO 1: head 및 동적 할당(newNode) NULL 체크

    // TODO 2: newNode의 data, prev, next 초기화

    // TODO 3: 기존 첫 노드가 있을 경우((*head != NULL)) 해당 노드의 prev 재설정

    // TODO 4: *head를 newNode로 변경
}

// 특정 노드 삭제
void deleteNode(Node **head, Node *removeNode) {
    // TODO 5: head, *head, removeNode의 NULL 예외 처리

    // TODO 6: removeNode가 첫 번째 노드인 경우(*head == removeNode)와 아닌 경우의 이전 연결 정리

    // TODO 7: removeNode의 다음 노드가 존재하는 경우(removeNode->next != NULL) 다음 노드의 prev 연결 정리

    // TODO 8: free(removeNode) 호출하여 메모리 해제
}

void printList(Node *head) {
    Node *curr = head;
    printf("List: ");
    while (curr != NULL) {
        printf("%d <-> ", curr->data);
        curr = curr->next;
    }
    printf("NULL\n");
}