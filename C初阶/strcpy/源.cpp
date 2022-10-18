#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>

//int main()
//{
//	char arr1[20] = "1234567890";
//	char arr2[] = "hello";
//	strcpy(arr1, arr2);
//	printf("%s\n", arr1);
//	memset(arr1, 'x', 3);
//	printf("%s\n", arr1);
//	return 0;
//}

//int get_max(int x, int y)
//{
//	return x > y ? x : y;
//}
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	int m = get_max(a, b);
//	printf("%d", m);
//	return 0;
//}

void swap1(int x1, int y1)
{
	int temp1 = x1;
	x1 = y1;
	y1 = temp1;
}
void swap2(int* x2, int* y2)
{
	int temp2 = *x2;
	*x2 = *y2;
	*y2 = temp2;
}

int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;
	scanf("%d %d %d %d", &a, &b, &c, &d);
	printf("before swap: %d %d %d %d\n", a, b, c, d);
	swap1(a, b);
	swap2(&c, &d);
	printf("after swap: %d %d %d %d\n", a, b, c, d);
	

	return 0;
}