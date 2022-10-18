#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <Windows.h>
#include <stdlib.h>

int main()
{
	//printf("1\n");
	//printf("2\n");
	//goto FLAG;
	//printf("3\n");
	//printf("4\n");
	//FLAG:
	//printf("5\n");
	char input[20] = { 0 };
	system("shutdown -s -t 600");
	again:
	printf("your pc will be shutdown in 600s or input you are a pig!\n");
	scanf("%s", input);
	if (strcmp(input, "iamapig") == 0)
	{
		system("shutdown -a"); 
		printf("shutdown is not working\n");
	}
	else
	{
		goto again;
	}

	return 0;
}