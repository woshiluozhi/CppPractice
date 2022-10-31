#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <time.h>

//int main()
//{
//	size_t begin = clock();
//	size_t n = 0;
//	for (size_t i = 0; i < 10000000; i++)
//	{
//		n++;
//	}
//	size_t end = clock();
//	printf("%d\n", end - begin);
//	return 0;
//}



//void Func2(int N)
//{
//	int count = 0;
//
//	for (int i = 0; i < 2 * N; i++)
//	{
//		count++;
//	}
//
//	int M = 10;
//	while (M--)
//	{
//		count++;
//	}
//	printf("%d\n", count);
//}

//void()
//
//
//
//int main()
//{
//	Func2(10);
//	return 0;
//}

//消失的数组
//int missingNumber(int* nums, int numSize)
//{
//	int N = numSize + 1;
//	int ret = N * (N + 1) / 2;
//	for (int i = 0; i < N; i++)
//	{
//		ret -= nums[i];
//	}
//	return ret;
//}
int missingNumber(int* nums, int numSize)
{
	int N = numsSize;
	int x = 0;
	for (int i = 0; i < numsSize; i++)
	{
		x ^= nums[i];
	}
	for (size_t j = 0; j < N + 1; j++)
	{
		x ^= j;
	}
	return x;
}
