#include <stdio.h>

int main()
{
	int coding = 0;
	printf("can you sonsist soding?\n");
	scanf_s("%d", &coding);
	if (coding == 1)
	{
		printf("well done, you can have a offermhy");
	}
	else
	{
		printf("you lost you dream!");
	}
	return 0;
}