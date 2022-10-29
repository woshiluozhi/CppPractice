#include <stdio.h>

extern int Add(int, int);

int main()
{
	int a = 3;
	int b = 5;
	int c = Add(a, b);
	printf("%d", c);
	return 0;
}