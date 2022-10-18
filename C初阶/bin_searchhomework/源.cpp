#include <stdio.h>

int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9 };
	int left = 0;
	int right = sizeof(arr) / sizeof(arr[0]) - 1;
	int mid = 0;
	int num = 0;
	scanf_s("%d", &num);
	while (left <= right)
	{
		mid = (left + right) / 2;
		if (arr[mid] > num)
		{
			right = mid -1;
		}
		else if (arr[mid] < num)
		{
			left = mid +1;
		}
		else
		{
			printf("%d", mid);
			break;
		}
		if (left > right)
		{
			printf("we can find not it!\n");
			break;
		}

	}
	return 0;
}