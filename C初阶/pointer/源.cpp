#include <stdio.h>

int main()
{
	int a = 1;
	int a1 = 123456;
	int*  pa = &a;

	char ch = 'w';
	char ch1 = 'x';
	char* pc = &ch;

	//*pa = 20;
	//printf("%d", a);
	printf("%d\n", sizeof(short*));
	printf("%d\n", sizeof(int*));
	printf("%d\n", sizeof(long*));
	printf("%d\n", sizeof(long long*));
	printf("%d\n", sizeof(float*));
	printf("%d\n", sizeof(double*));

	return 0;
}