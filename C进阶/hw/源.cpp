#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>



int x = 5, y = 7;
void swap()
{
	int z;
	z = x;
	x = y;
	y = z;
}
int main()
{
	int x = 3, y = 8;
	swap();
	printf("%d,%d\n", x, y);
	return 0;
}

