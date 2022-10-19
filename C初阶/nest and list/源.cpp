#include <stdio.h>

void new_line()
{
	printf("haha\n");
}

void three_line()
{
	for (int i = 0; i < 3; i++)
	{
		new_line();
	}
}

int main()
{
	printf("%d", printf("%d", printf("%d", 43)));

	three_line();
	return 0;
}