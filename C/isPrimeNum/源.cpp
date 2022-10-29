#include <stdio.h>
#include <math.h> 

int is_primer(int n)
{
	for (int i = 2; i <= sqrt(n); i++)
	{
		if (n % i == 0)
		{
			return 0;
		}
	}return 1;
}

int main()
{
	int i = 0;
	for ( i = 100; i < 201; i++)
	{
		if (is_primer(i) == 1)
		{
			printf("%d\n", i);
		}
	}
	return 0;
}