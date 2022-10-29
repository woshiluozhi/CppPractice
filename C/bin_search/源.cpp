# include <stdio.h>

int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	int left = 0;
	int right = sz - 1;
	int k = 0;
	scanf_s("%d", &k);

	int mid = 0;
	while (left <= right)
	{
		mid = (left + right) / 2;
		if (k > arr[mid])
		{
			left = mid + 1;
		}
		else if (k < arr[mid])
		{
			right = mid - 1;
		}
		else
		{
			printf("the number is in No.%d", mid);
			break;
		}
	}
	if (left > right)
	{
		printf("We can not find it");
	}


	return 0;
}