#ifndef BINARY_SEARCH_H
#define BINARY_SEARCH_H

// 정렬된 배열에서 target을 찾아 인덱스를 반환. 없으면 -1 반환.
int BinarySearch(int dataset[], int size, int target);

#endif

int BinarySearch(int dataset[], int size, int target)
{
    int left = 0;
    int right = size - 1;

    while (left <= right)
    {
        int mid = (left + right) / 2;
        if (dataset[mid] == target)      // dataset[mid]로 수정
            return mid;
        else if (target < dataset[mid])  // dataset[mid]로 수정
            right = mid - 1;
        else
            left = mid + 1;
    }
    return -1;
}

#include <stdio.h>

// 함수 선언
int BinarySearch(int dataset[], int size, int target);

int main(void) {
    int dataset[] = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19};
    int size = sizeof(dataset) / sizeof(dataset[0]);
    int target = 7;
    int non_exist_target = 10;

    // 1. 존재하는 값 탐색 테스트
    int index = BinarySearch(dataset, size, target);
    if (index != -1) {
        printf("탐색 성공: %d은(는) 인덱스 %d에 위치합니다.\n", target, index);
    } else {
        printf("탐색 실패: %d은(는) 배열에 존재하지 않습니다.\n", target);
    }

    // 2. 존재하지 않는 값 탐색 테스트
    index = BinarySearch(dataset, size, non_exist_target);
    if (index != -1) {
        printf("탐색 성공: %d은(는) 인덱스 %d에 위치합니다.\n", non_exist_target, index);
    } else {
        printf("탐색 실패: %d은(는) 배열에 존재하지 않습니다.\n", non_exist_target);
    }
    return 0;
}