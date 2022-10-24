#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int count_dif_bit(int m, int n)
{
	int tmp = m ^ n;
	int count = 0;
	while (tmp)
	{
		tmp = tmp & (tmp - 1);
		count++;
	}
	return count;
}

int main()
{
	int m = 0;
	int n = 0;
	while (scanf("%d%d\n", &m, &n) == 2)
	{
		//count_dif_bit(m, n);
		printf("%d", count_dif_bit(m, n));
	}
	return 0;
}