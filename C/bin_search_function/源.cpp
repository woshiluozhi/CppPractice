#include <stdio.h>
#include <string.h>

//int bin_search(int* array, int size, int number)
int bin_search(int array[], int size, int number)
{
	int left = 0;
	int right = size - 1;

	while (left <= right)
	{
		int mid = (left + right) / 2;
		if (array[mid] > number)
		{
			right = mid - 1;
		}
		else if (array[mid] < number)
		{
			left = mid + 1;
		}
		else
		{
			return mid;
		}
	}
	return -1;
	}

void Add(int* p)
{
	//*p += 1;
	(*p)++;
}


int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	int k = 0;
	scanf_s("%d", &k);
	int ret = bin_search(arr, sz, k);
	if (-1 == ret)
	{
		printf("we can not find number\n");
	}
	else
	{
		printf("the number is in %d\n", ret);
	}

	int nn = 0;
	Add(&nn);
	printf("%d", nn);
	return 0;
}

