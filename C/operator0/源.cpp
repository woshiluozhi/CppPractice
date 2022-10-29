#include <stdio.h>

void test1(int arr[])
{
	printf("%d\n", sizeof(arr));
}

void test2(char ch[])
{
	printf("%d\n", sizeof(ch));
}

int main()
{
	//int arr11[10];
	//printf("%zu\n", sizeof(arr11[9]));
	//printf("%zu\n", sizeof(arr11[10]));
	
	int arr[10] = { 0 };
	char ch[10] = { 0 };
	printf("%d\n", sizeof(arr));
	printf("%d\n", sizeof(ch));
	test1(arr);
	test2(ch);
	printf("%d\n", ~1);
	printf("%d\n", ~0);
	int i = 0, a = 0, b = 2, c = 3, d = 4;
	i = a++ && ++b && d++;
	printf("%d %d %d %d", a, b, c, d);



	return 0;
}