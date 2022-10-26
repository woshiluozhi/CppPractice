#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
    int n = 0;
    scanf("%d", &n);
    int arr[50] = { 0 };
    for (int i = 0; i < n; i++)
    {
        scanf("%d ", &arr[i]);
    }
    int j = 0;
    int k = 0;
    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i] > arr[i + 1])
        {
            j++;
        }
        else
        {
            k++;
        }
    }
    if (j == 0 || k == 0)
        printf("sorted");
    else
        printf("unsorted");
    return 0;
}