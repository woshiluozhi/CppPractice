#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//int main()
//{
	//int age = 0;
	//scanf("%d", &age);
	//if (age < 18)
	//{
	//	printf("teenage");
	//}
	//else if (age >17 && age < 60)
	//{
	//	printf("adult");
	//}
	//else
	//{
	//	printf("oldman");
	//}
	// 
	// 
	//int day = 0;
	//scanf("%d", &day);
	//switch (day)
	//{
	//case 1:
	//	printf("Monday");
	//	break;
	//case 2:
	//	printf("Tuesday");
	//	break;
	//case 3:
	//	printf("Wednesday");
	//	break;
	//case 4:
	//	printf("Thursday");
	//	break;
	//case 5:
	//	printf("Friday");
	//	break;
	//case 6:
	//	printf("Saturday");
	//	break;
	//case 7:
	//	printf("Sunday");
	//	break;
	//default:
	//	break;
	//}

//	int i = 0;
//	while (i < 10)
//	{
//		
//		i++;
//		if (5 == i)
//			continue;
//		printf("%d ", i);
//	}
//	return 0;
//}


//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		putchar('t');
//	}
//	return 0;
//}

//int main()
//{
//	int c;
//	puts("Enter text. Include a dot ('.') in a sentence to exit:");
//	do {
//		c = getchar();
//		putchar(c);
//	} while (c != '.');
//	return 0;
//}

//int main()
//{
//	char password[20] = { 0 };
//	printf("请输入密码:>");
//	scanf("%s", password);
//	printf("请确认密码(Y/N):");
//
//	char tmp = 0;
//	while ((tmp = getchar()) != '\n')
//	{
//		;
//	}
//
//	int ch = getchar();
//	if (ch == 'Y')
//	{
//		printf("确认成功\n");
//	}
//	else
//	{
//		printf("确认失败\n");
//	}
//
//	return 0;
//}

//int main()
//{
//	char ch = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		if (ch < '0' || ch > '9')
//		{
//			continue;
//		}
//		putchar(ch);
//	}
//}

//int main()
//{
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d ", i);
//	}
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	do
//	{ 
//		printf("%d ", i);
//		i++;
//	} while (i < 10);
//}

//int main()
//{
//	for (int i = 1; i < 101; i++)
//	{
//		if (i % 3 == 0)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}
// 
// 
//int main()
//{
//	int arr[3] = { 0 };
//	for (int i = 0; i < 3; i++)
//	{
//		scanf("%d", arr + i);
//	}
//
//	for (int i = 0; i < 3 - 1; i++)
//	{
//		for (int j = 0; j < 3 - i - 1; j++)
//		{
//			if (arr[j] < arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//
//	for (int i = 0; i < 3; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//
//	return 0;
//}

#include <math.h>

//int main()
//{
//	for (int i = 100; i < 201; i++)
//	{
//		int sq = sqrt(i);
//		for (int j = 2; j <= sq; j++)
//		{
//			if (i % j == 0)
//			{
//				break;
//			}
//			if (j == sq)
//			{
//				printf("%d ", i);
//			}
//		}
//	}
//	return 0;
//}

//int main()
//{
//	double sq = sqrt(101);
//	printf("%f ", sq);
//	return 0;
//}

//int main()
//{
//	double sum = 0;
//	//int flag = 1;
//	for (int i = 1; i < 101; i++)
//	{
//		//sum += flag * 1.0 / i;
//		//flag *= -1;
//		sum += 1.0 * pow(-1, i + 1) / i;
//	}
//	printf("%lf", sum);
//	return 0;
//}



//int main()
//{
//	int n = 0;
//	int sum = 1;
//	scanf("%d", &n);
//	for (int i = 1; i < n + 1; i++)
//	{
//		sum *= i;
//	}
//	printf("%d", sum);
//}

//int Factorial(int n)
//{
//	int sum1 = 1;
//	for (int j = 1; j < n + 1; j++)
//	{
//		sum1 *= j;
//	}
//	return sum1;
//}
//
//int main()
//{
//	int sum = 0;
//	int n = 0;
//	scanf("%d", &n);
//	for (int i = 1; i < n + 1; i++)
//	{
//		sum += Factorial(i);
//	}
//	printf("%d", sum);
//	return 0;
//}

//void bin_search(int* arr, int sz, int n)
//{
//	int left = 0;
//	int right = sz - 1;
//	while ((left != right) || (left + 1 != right))
//	{
//		if (arr[left + right / 2] < n)
//		{
//			left = (left + right) / 2 + 1;
//		}
//		else if (arr[left + right / 2] > n)
//		{
//			right = (left + right) / 2 - 1;
//		}
//		else if (arr[left] == n)
//		{
//			printf("%d", left);
//			break;
//		}
//		else if (arr[right] == n)
//		{
//			printf("%d", right);
//			break;
//		}
//	}
//	printf("no");
//}

int bin_search(int* arr, int sz, int n)
{
	int left = 0;
	int right = sz - 1;
	int mid = 0;
	while (left <= right)
	{
		mid = (left + right) / 2;
		if (arr[mid] < n)
		{
			left = mid + 1;
		}
		else if (arr[mid] > n)
		{
			right = mid - 1;
		}
		else  
		{
			return mid;
		}
	}
	return -1;
}

int main()
{
	int arr[10] = { 1,3,5,6,9,13,24,35,70,99 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	int n = 0;
	scanf("%d", &n);
	printf("%d ", bin_search(arr, sz, n));
	return 0;
}