#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>
struct st
{
	int* p;
	int i;
	char a;
};

enum weekday
{
	sun,
	mon = 3,
	tue,
	wed
};
int main()
{
	enum weekday workday;
	workday = wed;
	printf("%d\n", workday);
	int sz = sizeof(struct st);
	printf("%d\n", sz);
	char arr[2][4];
	strcpy(arr[0], "you");
	strcpy(arr[1], "me");
	arr[0][3] = '&';
	printf("%s \n", arr);
	return 0;
}