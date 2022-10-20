#define _CRT_SECURETE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	//int num = 10;
	//float fn = 3.14f;
	//int arr1[10];
	//char arr2[10];
	//double arr3[10];
	////int arr4[num];

	int n = 0;//初始化

	int m;
	m = 20;//赋值

	int arr[10] = { 1 };//不完全初始化

	int arr1[10] = { 1,2,3,4,5,6,7,8,9,0 };

	//int arr2[];
	//1C 2D 3
	//int arr4[40960] = { 0 };
	int darr[3][4] = { 0 };
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			printf("darr[%d][%d] is in %d\n", i, j, &darr[i][j]);
		}
	}
	printf("%p\n", arr1);
	printf("%p\n", arr1 + 1);
	printf("%p\n", &arr1[0]);
	printf("%p\n", &arr1[0] + 1);
	printf("%p\n", &arr1);
	printf("%p\n", &arr1 + 1);

	return 0;
}