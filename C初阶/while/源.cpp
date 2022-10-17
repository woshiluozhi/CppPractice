#include <stdio.h>

int main()
{
	//while (1)//dead loop
	//{
	//	printf("zhizhi\n");
	//}
	//int i = 0;
	//while (i < 11)
	//{
	//	printf("%d\n", i); 
	//	if (i == 5)
	//	{
	//		//break;
	//		continue;
	//	}
	//	i++;
	//}


	// int ch = 0;
	//while ((ch = getchar()) != EOF)
	//{
	//	putchar(ch);
	//}

	//int ch = 0;
	//while ((ch = getchar()) != EOF)
	//{
	//	putchar(ch);
	//}

	int ch = '\0';
	while ((ch = getchar()) != EOF)
	{
		if (ch < '0' || ch > '9')
			continue;
		putchar(ch);
	}



	return 0;
}