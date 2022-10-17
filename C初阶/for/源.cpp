#include <stdio.h>

int main()
{
	//int i = 0;
	//for (i = 0; i < 10; i++)
	//{
	//	printf("%d\t", i);
	//}

	//for (int i = 1; i < 101; i++)
	//{
	//	if (i % 3 == 0)
	//		printf("%d", i);
	//}

	//int a = 0;
	//int b = 0;
	//int c = 0;
	//scanf_s("%d %d %d", &a, &b, &c);
	//if (a < b)
	//{
	//	int temp = a;
	//	a = b;
	//	b = temp;
	//}
	//if (b < c)
	//{
	//	int temp = b; 
	//	b = c;
	//	c = temp;
	//	if (a < b)
	//	{
	//		int temp = a;
	//		a = b;
	//		b = temp;
	//	}
	//}

	//printf("%d %d %d", a, b, c);

	
	//int i, j;
	//for (i = 100; i < 201; i++)
	//{
	//	for (j = 2; j < i; j++)
	//	{
	//		if (i % j == 0)
	//			break;
	//	}
	//	if (i == j)
	//	{
	//		printf("%d\t", i);
	//	}
	//}


	//for (int i = 1000; i < 2001; i++)
	//{
	//	if ((i % 4 == 0 && i % 100 != 0) || (i % 400 == 0))
	//		printf("%d\t", i);
	//}

	//int a = 20;
	//int b = 4020;
	//int c = 0;
	//while (c = a % b)
	//{
	//	a = b;
	//	b = c;
	//}
	//printf("%d\n", b);

	//for (int i = 1; i < 10; i++)
	//{
	//	for (int j = 1; j < i+1; j++)
	//	{
	//		printf("%d * %d = %d\t", j, i, i * j);
	//	}
	//	printf("\n");
	//}

	//int arr[10] = { 144,2,3312,412,5213,6,7213,8,9312,0 };
	//int i = 0;
	//for (i = 0; i < 9; i++)
	//{
	//	if (arr[i] > arr[i + 1])
	//	{
	//		int temp = arr[i];
	//		arr[i] = arr[i + 1];
	//		arr[i + 1] = temp;
	//	}
	//}
	//printf("%d\n", arr[9]);


	int i = 0;
	int arr[10] = { 144,2,3312,412,5213,6,7213,8,9312,0 };
	int max = arr[0];
	for ( i = 0; i < 10; i++)
	{
		if (arr[i] > max)
			max = arr[i];
	}
	printf("%d", max);

	

	


	return 0;
}