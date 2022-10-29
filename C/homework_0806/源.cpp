#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

void bubble_sort(int* arr3, int n, int m)
{
    for (int i = 0; i < n + m - 1; i++)
    {
        for (int j = 0; j < n + m - i - 1; j++)
        {
            if (arr3[j] > arr3[j + 1])
            {
                int temp = arr3[j];
                arr3[j] = arr3[j + 1];
                arr3[j + 1] = temp;
            }
        }
    }
}

int main()
{
    int n = 0;
    int m = 0;
    scanf("%d %d", &n, &m);

    int arr1[1000] = { 0 };
    int arr2[1000] = { 0 };
    int arr3[2000] = { 0 };

    for (int i = 0; i < n; i++)
    {
        scanf("%d ", &arr1[i]);
    }

    for (int i = 0; i < m; i++)
    {
        scanf("%d ", arr2 + i);
    }

    for (int i = 0; i < n + m; i++)
    {
        if (i < n)
            arr3[i] = arr1[i];
        else
            arr3[i] = arr2[i - n];
    }

    bubble_sort(arr3, n, m);

    for (int i = 0; i < n + m; i++)
    {
        printf("%d ", arr3[i]);
    }
    return 0;
}