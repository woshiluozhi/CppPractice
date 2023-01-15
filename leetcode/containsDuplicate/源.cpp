#include "stdio.h"


bool containsDuplicate(int* nums, int numsSize) {
    for (int i = 0; i < numsSize; i++)
    {
        for (int j = i + 1; j < numsSize; j++)
        {
            if (nums[i] == nums[j])
            {
                printf("true");
                return true;
            }

        }
    }
    printf("false");
    return false;
}

int main()
{
    int arr[4] = { 1, 2, 3, 4 };
    int numsSize = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < numsSize; i++)
    {
        printf("%d  ", arr[i]);
    }
    printf("\n");
    printf("numsSize = %d\n", numsSize);
    containsDuplicate(arr, numsSize);
}