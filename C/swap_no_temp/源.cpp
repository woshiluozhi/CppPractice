#include <stdio.h>

int main()
{
	int a = 3;
	int b = 5;
	printf("before swap: a = %d, b = %d\n", a, b);
	a = a ^ b;
	b = a ^ b;
	a = a ^ b;
	printf("after swap: a = %d, b = %d\n", a, b);
	return 0;
}