#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

void print1(int arr[10], int sz)
{
	int i = 0;
	for ( i = 0; i < sz; i++)
	{

	}
}

int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	print1(arr, sz);
	return 0;
}