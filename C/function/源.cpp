#include <stdio.h>

int add(int x, int y);

int main()
{
	int num1 = 0;
	int num2 = 0;
	int sum = 0;
	printf("please input two nums\n");
	scanf_s("%d %d", &num1, &num2);
	//sum = num1 + num2;
	sum = add(num1, num2);
	printf("the sum of num1 and num2 is %d", sum);

	return 0;
}

int add(int x, int y)
{
	return x + y;
}