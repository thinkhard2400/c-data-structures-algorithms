#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node *next;
} Node;

// 맨 앞에 노드 삽입
void insertFirst(Node **head, int data) {
    // TODO 1: head 검사 및 동적 할당(newNode) 후 NULL 체크

    // TODO 2: newNode의 data 및 next 설정 후 *head 업데이트
}

// 특정 데이터 노드 삭제
void deleteNode(Node **head, int data) {
    // TODO 3: head, *head NULL 체크 예외 처리

    // TODO 4: 첫 번째 노드가 삭제 대상인 경우 처리 (head 변경 후 free)

    // TODO 5: 삭제할 노드를 찾아 이동 (temp 및 prev 포인터 활용)

    // TODO 6: 삭제 대상을 찾지 못한 경우 예외 처리

    // TODO 7: 이전 노드와 다음 노드 연결 재설정 후 free(temp)
}

void printList(Node *head) {
    Node *curr = head;
    printf("List: ");
    while (curr != NULL) {
        printf("%d -> ", curr->data);
        curr = curr->next;
    }
    printf("NULL\n");
}