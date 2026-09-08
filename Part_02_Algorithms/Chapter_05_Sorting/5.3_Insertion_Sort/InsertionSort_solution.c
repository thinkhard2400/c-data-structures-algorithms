#ifndef INSERTION_SORT_H
#define INSERTION_SORT_H

/*
 * InsertionSort
 * - DataSet: 정렬할 int형 배열의 시작 주소
 * - Length: 배열의 원소 개수
 */
void InsertionSort(int DataSet[], int Length);

#endif

#include <stdio.h>

// InsertionSort 함수 선언
void InsertionSort(int ary[], int len)
{
    int i,j,key;
    for (i=1; i<len; i++)
    {
        key = ary[i];
        for (j=i; j>0; j--)
        {
            if (ary[j-1]>key)
            {
                ary[j] = ary[j-1];
                ary[j-1] = key;
            }
        }
    }
}

int main(void)
{
    int arr[] = { 15, 3, 8, 1, 9, 2, 7 };
    int length = sizeof(arr) / sizeof(arr[0]);
    int i = 0;

    printf("🧪 정렬 전: ");
    for (i = 0; i < length; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // 삽입 정렬 호출
    InsertionSort(arr, length);

    printf("✅ 정렬 후: ");
    for (i = 0; i < length; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}