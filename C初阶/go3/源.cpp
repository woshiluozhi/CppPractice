#define _CRT_SECURE_NO_WARNINGS 1

void menu()
{
	printf("************************");
	printf("*******1.play************");
	printf("*******0.exit************");
	printf("************************");
}

int main()
{
	do
	{
		menu();
	} while (true);

	return 0;
}