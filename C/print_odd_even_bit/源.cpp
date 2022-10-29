#include <stdio.h>

//void Printbit(int num)
//{
//	for (int i = 31; i >= 1; i -= 2)
//	{
//		printf("%d ", (num >> i) & 1);
//	}
//	printf("\n");
//
//	for (int i = 30; i >= 0; i -= 2)
//	{
//		printf("%d ", (num >> i) & 1);
//	}
//	printf("\n");
//}

int main()
{
	int n = 0;
	scanf_s("%d", &n);
	//Printbit(n);
	for (int i = 31; i > 0; i -= 2)
	{
		printf("%d ", (n >> i) & 1);
	}
	printf("\n");
	for (int i = 32; i >= 0; i -= 2)
	{
		printf("%d ", (n >> i) & 1);
	}
	return 0;
}