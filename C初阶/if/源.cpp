#include <stdio.h>

int main()
{
	//int age = 101;
	//if (age < 18)
	//{
	//	printf("Î´³ÉÄê");
	//}
	//else
	//{
	//	printf("adult");
	//}
	int age = 0;
	scanf_s("%d", &age);
	if (age < 18)
	{
		printf("boy");
	}
	else if (age < 30)
	{
		printf("man");
	}
	else if (age < 55)
	{
		printf("older man");
	}
	else
	{
		printf("oldman");
	}

	return 0;
}