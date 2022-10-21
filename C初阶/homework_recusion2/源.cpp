#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <assert.h>
#include <string.h>

//int n_k(int n, int k)
//{
//	if (k > 1)
//	{
//		return n * n_k(n, k - 1);
//	}
//	else
//	{
//		return n;
//	}
//}


int DigitSum(int n)
{
	if (n > 9)
	{
		return n % 10 + DigitSum(n / 10);
	}
	else
	{
		return n;
	}
}

void reverse_string(char* arr)
{
	int len = strlen(arr);
	char tmp = *arr;
	*arr = *(arr + len - 1);

	*(arr + len - 1) = '\0';
	if (strlen(arr + 1) >= 2)
		reverse_string(arr + 1);

	*(arr + len - 1) = tmp;
}

int strlen1(char* arr)
{
	if (*arr != '\0')
	{
		return 1 + strlen1(arr + 1);
	}
	else
	{
		return 0;
	}
}

int strlen2(char* arr)
{
	int sum = 0;
	while ((*arr) != '\0')
	{
		sum++;
		arr++;
	}
	return sum;
}

int main()
{
	//int n = 4;
	//int k = 5;
	//printf("%d\n", n_k(n, k));

	printf("%d\n", DigitSum(1729));

	char ch1[] = "abcd";
	printf("%d %d\n", strlen1(ch1), strlen2(ch1));
	//char* ads = {'a','b', 'c', '\0'};
	char string[] = "zhengmaomaodezuoye";

	reverse_string(string);
	printf("%s", string);
	//reverse_string(ads);



	return 0;
}