#include <stdio.h>

//int g_val = 2018;

extern int g_val;

int main()
{
	printf("%d\n", g_val);
	return 0;
}