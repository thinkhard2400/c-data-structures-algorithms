#include <stdio.h>
#define MAX_SIZE 100

typedef struct {
    int data[MAX_SIZE];
    int size;
} ArrayList;

// 리스트 초기화
void initList(ArrayList *list) {
    list->size = 0;
}

// 특정 위치에 요소 삽입
void insert(ArrayList *list, int position, int item) {
    if (list->size >= MAX_SIZE || position < 0 || position > list->size) {
        printf("오류: 삽입 범위를 벗어났거나 리스트가 가득 찼습니다.\n");
        return;
    }
    for (int i = list->size - 1; i >= position; i--) {
        list->data[i + 1] = list->data[i];
    }
    list->data[position] = item;
    list->size++;
}

// 특정 위치의 요소 삭제
int delete(ArrayList *list, int position) {
    if (list->size <= 0 || position < 0 || position >= list->size) {
        printf("오류: 삭제할 수 없는 위치입니다.\n");
        return -1;
    }
    int item = list->data[position];
    for (int i = position; i < list->size - 1; i++) {
        list->data[i] = list->data[i + 1];
    }
    list->size--;
    return item;
}

// 리스트 전체 출력
void printList(ArrayList *list) {
    printf("List: [");
    for (int i = 0; i < list->size; i++) {
        printf("%d", list->data[i]);
        if (i < list->size - 1) printf(", ");
    }
    printf("]\n");
}