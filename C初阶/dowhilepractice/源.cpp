#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//#include <windows.h>
//#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>

void game()
{
	int ret = rand() % 100;
    //printf("%d\n", ret);

	
	int guess = 0;
	

	while (1)
	{
		printf("please guess!\n");
		scanf("%d", &guess);
		if (guess < ret)
		{
			printf("the guess is small\n");
		}
		else if (guess > ret)
		{
			printf("the guess is big\n");
		}
		else if (guess == ret)
		{
			printf("you are right!\n");
			break;
		}
	}


}

void menu()
{
	printf("*****************\n");
	printf("******1.play******\n");
	printf("******0.exit******\n");
	printf("*****************\n");
}
int main()
{
	//char arr1[] = "!welcome!";
	//char arr2[] = "0#######0";
	//int left = 0;
	////int right = sizeof(arr2) / sizeof(arr2[0]) - 1;
	//int right = strlen(arr1) - 1;
	//printf("%d\n%d\n%d\n", sizeof(arr2) / sizeof(arr2[0]), strlen(arr2), arr2[9]);
	//

	//while (left <= right)
	//{
	//	printf("%s", arr2);
	//	arr2[left] = arr1[left];
	//	arr2[right] = arr1[right];
	//	left++;
	//	right--;
	//	
	//	Sleep(1000);
	//	system("cls");//clean screen
	//}

	//int i = 0;
	//char password[7] = { 0 };
	//for (int i = 0; i < 3; i++)
	//{
	//	printf("please input the pasword!\n");
	//	scanf("%s", password);
	//	if (strcmp(password, "zhizhi") == 0)
	//	{
	//		printf("password is correct, login success!\n");
	//		break;
	//	}
	//	else
	//	{
	//		printf("password is not correct!");
	//	}
	//}
	//if (i == 3)
	//{
	//	printf("three times you are not correct, exit!\n");
	//}
	int input = 0;
	srand((unsigned int)time(NULL));
	
	do
	{
		game();
		menu();
		printf("please choose in 1 or 0\n");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("play again\n");
			break;
		case 0:
			printf("exit game\n");
			break;
		default:
			printf("incorrect input!\n");
			break;
		}

	} while (input);


	return 0;
}