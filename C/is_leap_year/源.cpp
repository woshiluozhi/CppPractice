#include <stdio.h>

int is_leap_year(int year)
{
	if (((year % 4) == 0 && (year % 100) != 0) || (year % 400 == 0))
		return 1;
	else
		return 0;
}

int main()
{
	int y = 0;
	int count = 0;
	for (y = 1000; y < 2023; y++)
	{
		if (is_leap_year(y) == 1)
		{
			count++;
			printf("%d\n", y);
		}
	}
	printf("%d", count);
	return 0;
}