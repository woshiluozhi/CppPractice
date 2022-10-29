#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void menu()
{
	printf("#######################\n");
	printf("######1.play game#######\n");
	printf("######0.exit game#######\n");
	printf("######################\n");
}


int main()
{
	int input = 0;
	int num = 0;
	srand((unsigned int)time(NULL));
	int guess = 0;

	do
	{
		guess = rand() % 100;
		menu();
		scanf("%d", &input);
		if (1 == input)
		{
			do
			{
				printf("please guess a number:\n");
				scanf("%d", &num);
				if (num == guess)
				{
					printf("you guess right!\n");
				}
				else if (num > guess)
				{
					printf("too large!\n");
				}
				else
				{
					printf("too small!\n");
				}
			} while (num != guess);

		}
		else if (0 == input)
		{
			printf("you exit game!\n");
			break;
		}
		else
			printf("your intput is wrong, please input again!\n");
	} while (input);

	return 0;
}