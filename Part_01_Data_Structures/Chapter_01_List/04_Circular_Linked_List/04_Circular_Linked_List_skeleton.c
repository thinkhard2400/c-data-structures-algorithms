#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node *prev;
    struct Node *next;
} Node;

// 맨 뒤에 노드 삽입
void insertLast(Node **head, int data) {
    // TODO 1: head 검사 및 동적 할당(newNode) NULL 체크

    // TODO 2: 빈 리스트일 때 자기 자신을 가리키도록 설정 후 *head 지정

    // TODO 3: 기존 노드가 존재할 때 tail((*head)->prev)을 구하고 4개의 포인터 고리 재연결
}

// 특정 노드 삭제
void deleteNode(Node **head, Node *removeNode) {
    // TODO 4: head, *head, removeNode NULL 예외 처리

    // TODO 5: 리스트에 노드가 1개뿐일 때 (*head = NULL) 처리

    // TODO 6: removeNode가 *head일 때 *head를 다음 노드로 이동

    // TODO 7: 양옆 노드의 prev, next 연결 변경 및 free(removeNode)
}

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