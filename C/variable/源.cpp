#include <stdio.h>

int global = 2019;
int main()
{
	int local = 2018;
	int global = 2022;
	printf("%d\n", global);//local first!
	int num1 = 0;
	int num2 = 0;
	int sum = 0;
	printf("input two nums:>");
	scanf_s("%d %d", &num1, &num2);
	sum = num1 + num2;
	printf("sum of num1 and num2 is : %d", sum);
	return 0;
}