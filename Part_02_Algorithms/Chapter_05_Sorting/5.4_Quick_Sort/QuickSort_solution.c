#ifndef QUICK_SORT_H
#define QUICK_SORT_H

/*
 * QuickSort
 * - DataSet: 정렬할 int형 배열의 시작 주소
 * - Left: 정렬할 구간의 시작 인덱스
 * - Right: 정렬할 구간의 끝 인덱스
 */
void QuickSort(int DataSet[], int Left, int Right);

#endif


void QuickSort(int arr[], int left, int right)
{
    if (left >= right)
        return;

    int i = left;
    int j = left - 1;
    int temp;

    while (i < right)
    {
        if (arr[i] < arr[right])
        {
            j++;
            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
        i++;
    }

    j++;
    temp = arr[right];
    arr[right] = arr[j];
    arr[j] = temp;

    QuickSort(arr, left, j - 1);
    QuickSort(arr, j + 1, right);
}


#include <stdio.h>

// QuickSort 함수 선언
int main(void)
{
    int arr[] = { 64, 34, 25, 12, 22, 11, 90 };
    int length = sizeof(arr) / sizeof(arr[0]);
    int i = 0;

    printf("🧪 정렬 전: ");
    for (i = 0; i < length; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // 퀵 정렬 호출 (시작 인덱스: 0, 끝 인덱스: length - 1)
    QuickSort(arr, 0, length - 1);

    printf("✅ 정렬 후: ");
    for (i = 0; i < length; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}