#include <stdio.h>

int main()
{
	//int i = 0;
	//do
	//{
	//	i++;
	//	if (5 == i)
	//	{
	//		continue;//dead loop
	//	}
	//	printf("%d", i);
	//	//i++;
	//} while (i < 10);

	//int n = 0;
	//int sum = 1;
	//scanf_s("%d", &n);
	//for (int i = 1; i < n + 1; i++)
	//{
	//	sum *= i;
	//}
	//printf("%d", sum);

	int sumadd = 0;
	int n = 4;
	int sum = 1;
	for (int j = 1; j < n + 1; j++)
	{
		//for (int i = 1; i < j + 1; i++)
		//{
			sum *= j;
		//}
		sumadd += sum;
	}
	printf("%d", sumadd);

	




	return 0;
}