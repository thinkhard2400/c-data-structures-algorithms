#include <stdio.h>
#define MAX_SIZE 100

typedef struct {
    int data[MAX_SIZE];
    int size;
} ArrayList;

// 리스트 초기화
void initList(ArrayList *list) {
    // TODO 1: list의 size를 0으로 초기화
}

// 특정 위치에 요소 삽입
void insert(ArrayList *list, int position, int item) {
    // TODO 2: 삽입 전 예외 처리 (가득 찼거나, position 범위가 잘못된 경우)

    // TODO 3: position 위치부터 뒤의 요소들을 한 칸씩 오른쪽으로 이동

    // TODO 4: position 위치에 item 저장 및 size 1 증가
}

// 특정 위치의 요소 삭제
int delete(ArrayList *list, int position) {
    // TODO 5: 삭제 전 예외 처리 (리스트가 비었거나, position 범위가 잘못된 경우)

    // TODO 6: position 위치의 데이터 저장 후, 뒤의 요소들을 한 칸씩 왼쪽으로 이동

    // TODO 7: size 1 감소 및 저장해둔 데이터 반환
    return -1;
}

void printList(ArrayList *list) {
    printf("List: [");
    for (int i = 0; i < list->size; i++) {
        printf("%d", list->data[i]);
        if (i < list->size - 1) printf(", ");
    }
    printf("]\n");
}