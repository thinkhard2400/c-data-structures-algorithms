#ifndef BUBBLE_SORT_H
#define BUBBLE_SORT_H
#include <stdio.h>

/*
 * BubbleSort
 * - DataSet: 정렬할 int형 배열의 시작 주소
 * - Length: 배열의 원소 개수
 */
void BubbleSort(int ary[], int len);

#endif

void BubbleSort(int ary[], int len)
{
    int i,j,temp;
    
    for (i=0; i<len-1; i++)
    {
        for (j=0; j<len-i-1; j++)
        {
            if (ary[j]>ary[j+1])
            {
                temp = ary[j];
                ary[j] = ary[j+1];
                ary[j+1] = temp;
            }
        }
    }
}

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

    // 버블 정렬 호출
    BubbleSort(arr, length);

    printf("✅ 정렬 후: ");
    for (i = 0; i < length; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}