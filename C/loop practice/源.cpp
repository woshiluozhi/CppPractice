#include <stdio.h>

int main()
{
	//double sum = 0.0;
	//int flag = 1;
	//for (int i = 1; i < 101; i++)
	//{
	//	sum += 1.0 / i * flag;
	//	flag = -flag;
	//}
	//printf("%lf\n", sum);

	//int i = 0;
	//double sum = 0.0;
	//int flag = 1;
	//for (i = 1; i <= 100; i++)
	//{
	//	sum += flag * 1.0 / i;
	//	flag = -flag;
	//}
	//printf("%lf\n", sum);

	int sum = 0;
	for (int i = 1; i < 101; i++)
	{
		if ((i % 10 == 9) || (i / 10 == 9))
		{
			sum++;
		}
	}printf("%d", sum);

	//int i = 0;
	//int count = 0;


	//for (i = 1; i <= 100; i++)
	//{
	//	if (i % 10 == 9)
	//		count++;
	//	if (i / 10 == 9)
	//		count++;
	//}
	//printf("%d\n", count);

	return 0;
}