#include <stdio.h>
#include "minus.h"

//int Add(int x, int y);
int Add(int , int );

int main()
{
	int a = 10;
	int b = 20;

	int s = Add(a, b);
	int ss = minus(a, b);
	printf("%d\n", s);
	printf("%d\n", ss);
}

int Add(int x, int y)
{
	return x + y;
}