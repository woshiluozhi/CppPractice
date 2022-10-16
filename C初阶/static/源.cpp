#include <stdio.h>

void test()
{
	// int i = 0;
	static int a = 0;
	a++;
	printf("%d", a);
}

int main()
{
	int i = 0;
	for ( i = 0; i < 10; i++)
	{
		test();
	}

	return 0;
}