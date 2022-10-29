//C D B C  D D
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <math.h>

void mprint(int n);

void swap(int* x, int* y);

void is_leap(int y);

int is_primer(int n);

int main()
{
	//int n = 0;
	//scanf("%d", &n);
	//mprint(n);

	//int a = 2;
	//int b = 3;
	//swap(&a, &b);
	//printf("%d %d\n", a, b);

	//int year = 2020;
	//is_leap(year);

	int num = 79;
	is_primer(num);

	return 0;
}

void mprint(int n)
{
	for (int i = 1; i < n + 1; i++)
	{
		for (int j = 1; j < i + 1; j++)
		{
			printf("%d * %d = %d ", j, i, j * i);
		}
		printf("\n");
	}
}

void swap(int* x, int* y)
{
	int temp = *x;
	*x = *y;
	*y = temp;
}

void is_leap(int y)
{
	if ((y % 4 == 0) && (y % 100 != 0))
	{
		printf("yes");
	}
	else if (y % 400 == 0)
	{
		printf("yes");
	}
	else
		printf("no");
}

int is_primer(int n)
{
	for (int i = 2; i <= sqrt(n); i++)
	{
		if (n % i == 0)
		{
			printf("no");
			return 1;
		}
	}
	printf("yes");
	return 0;
}
