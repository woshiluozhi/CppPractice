#include <stdio.h>

#define ADD(x, y) ((x) + (y))

int main()
{
	int a = 10;
	int b = 8;
	int c = ADD(a, b);
	printf("%d", c);

	return 0;
}