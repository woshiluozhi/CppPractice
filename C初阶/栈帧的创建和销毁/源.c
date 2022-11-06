#define _CRT_SECURE_NO_WARNINGS 1


#include <stdio.h>
#include <string.h>

int Add(int x, int y)
{
	return x + y;
}

int main()
{
	int a = 10;
	int b = 20;
	int c = 0;
	c = Add(a, b);
	printf("%d\n", c);
	return 0;
}

