#include <stdio.h>

//void odd_even(int* arr, int* arrodd, int* arreven, int size)
void odd_even(int arr[], int arrodd[], int arreven[], int size)
{
	int odd = 0;
	int even = 0;
	for (int i = 0; i < size; i++)
	{
		if (*(arr + i) % 2 == 1)
		{
			*(arrodd + i - even) = *(arr + i);
			odd++;
		}
		else
		{
			*(arreven + i - odd) = *(arr + i);
			even++;
		}
	}
	for (int j = 0; j < odd; j++)
	{
		*(arr + j) = *(arrodd + j);
	}
	for (int k = odd; k < size; k++)
	{
		*(arr + k) = *(arreven + k - odd);
	}
}

int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9 };
	int arrodd[10] = {};
	int arreven[10] = {};
	int size = sizeof(arr) / sizeof(arr[0]);
	odd_even(arr, arrodd, arreven, size);
	for (int i = 0; i < size; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
	for (int i = 0; i < size; i++)
	{
		printf("%d ", arrodd[i]);
	}
	printf("\n");
	for (int i = 0; i < size; i++)
	{
		printf("%d ", arreven[i]);
	}
	return 0;
}

//void swap_arr(int arr[], int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	int tmp = 0;
//
//
//	while (left < right)
//	{
//		// 从前往后，找到一个偶数，找到后停止
//		while ((left < right) && (arr[left] % 2 == 1))
//		{
//			left++;
//		}
//
//		// 从后往前找，找一个奇数，找到后停止
//		while ((left < right) && (arr[right] % 2 == 0))
//		{
//			right--;
//		}
//
//		// 如果偶数和奇数都找到，交换这两个数据的位置
//		// 然后继续找，直到两个指针相遇
//		if (left < right)
//		{
//			tmp = arr[left];
//			arr[left] = arr[right];
//			arr[right] = tmp;
//		}
//	}
//}

//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9 };
//	int arrodd[10] = {};
//	int arreven[10] = {};
//	int size = sizeof(arr) / sizeof(arr[0]);
//	odd_even(arr, arrodd, arreven, size);
//	//swap_arr(arr, size);
//	for (int i = 0; i < size; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}