#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

void factorial(int n)
{
	int i = 1;
	int sum = 1;
	while (n > 1)
	{
		sum *= n;
		n--;
	}
	printf("%d", sum);
}

int factorial_recusion(int n)
{
	if (n > 1)
	{
		return n * factorial_recusion(n - 1);
	}
	else
	{
		return 1;
	}

}

void print(int n)
{
	if (n > 9)
	{
		print(n / 10);
	}
	printf("%d ", n % 10);
}

int main()
{
	//int n = 5;
	//factorial(n);
	//printf("\n%d", factorial_recusion(5));
	int n = 123;
	print(n);

	return 0;
}
//A D B C B D
//F(2) = 2*f(2 * f(2 * f(5)))
//f(n) = f(1)
//         f(n -1)
//1234 123 12 1 