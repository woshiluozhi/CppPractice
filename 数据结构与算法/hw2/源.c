#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void fun(char** p)
{
	for (int i = 0; i < 4; i++)
	{
		printf("%s", p[i]);
	}
}
void f(int** p)
{
	;
}
//int main()
//{

	//char* s[6] = { "ABCD", "EFGH", "IJKL", "MNOP", "QRST", "UVWX" };
	//fun(s);
	//printf("\n");

	//int a[3][4] = { 1,2,3,4,5,6,7,8,9,10,11,12 };
	// 
	//int* k[10][30];
	//printf("%d\n", sizeof(k));

	//int a[4] = { 1,2,3,4 };
	//int b[3][4] = { {1,2,3,4},{5,6,7,8},{9,10,11,12} };
	//int* q[3] = { b[0],b[1],b[2] };
	//f(&a);

	//static char* s[] = { "black", "white", "pink", "violet" };
	//char** ptr[] = { s + 3, s + 2, s + 1, s }, *** p;
	//p = ptr;
	//++p;
	//printf("%s", **p + 1);

	//char* str[3] = { "stra", "strb", "strc" };
	//char* p = str[0];
	//int i = 0;
	//while (i < 3)
	//{
	//	printf("%s", p++);
	//	i++;
	//}

	//int m[] = { 1,2,3,4,5,6,7,8,9,0 };
	//int(*p)[4] = (int(*)[4])m;
	//printf("%d", p[1][2]);

//	char p1[15] = "abcd", * p2 = "ABCD", str[50] = "xyz";
//	strcpy(str + 2, strcat(p1 + 2, p2 + 1));
//	printf("%s", str);
//
//	return 0;
//}

/**
 * 代码中的类名、方法名、参数名已经指定，请勿修改，直接返回方法规定的值即可
 *
 *
 * @param str string字符串
 * @return int整型
 */
//int FirstNotRepeatingChar(char* str) {
//	// write code here
//	int sz = strlen(str);
//	for (int i = 0; i < sz; i++)
//	{
//		for (int j = 0; j < sz; j++)
//		{
//			if (i != j && str[i] == str[j])
//			{
//				break;
//			}
//			else if (j == sz - 1)
//			{
//				return i;
//			}
//		}
//	}
//	return -1;
//}
//
//bool isUnique(char* astr) {
//	int sz = strlen(astr);
//	for (int i = 0; i < sz - 1; i++)
//	{
//		for (int j = i + 1; j < sz; j++)
//		{
//			if (astr[i] == astr[j])
//				return false;
//		}
//	}
//	return true;
//}



//int cmp(const void* _a, const void* _b)
//{
//	return *(char*)_a - *(char*)_b;
//}
//
//bool CheckPermutation(char* s1, char* s2) {
//	int len_s1 = strlen(s1);
//	int len_s2 = strlen(s2);
//	qsort(s1, len_s1, sizeof(char), cmp);
//	qsort(s2, len_s2, sizeof(char), cmp);
//	return strcmp(s1, s2) == 0;
//}
//
//
//bool canPermutePalindrome(char* s) {
//	int a[128] = { 0 };
//	int len = strlen(s);
//	int cnt = 0;
//	for (int i = 0; i < len; i++)
//	{
//		a[s[i]]++;
//	}
//	for (int i = 0; i < 128; i++)
//	{
//		if (a[i] % 2 == 1)
//		{
//			cnt++;
//		}
//	}
//	if (cnt > 1)
//		return false;
//	else
//		return true;
//}



char* ff(char* str, char ch)
{
	char* it1 = str;
	char* it2 = str;
	while (*it2 != '\0')
	{
		while (*it2 == ch)
		{
			it2++;
		}
		*it1++ = *it2++;
	}
	return str;
}
int main() {
	char a[10];
	strcpy(a, "abcdcccd");
	printf("%s", ff(a, 'c'));
	return 0;
}


#include <stdio.h>
#include <string.h>
int main() {
	int n;
	char buffer[128];
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		scanf("%s", buffer);
		if (strlen(buffer) >= 10)
			printf("%c%d%c\n", buffer[0], strlen(buffer) - 2, buffer[strlen(buffer) - 1]);
		else
			printf("%s\n", buffer);
	}

	return 0;
}



char* replaceSpaces(char* S, int length) {
	char* ans = malloc(sizeof(char) * (length * 3 + 1));
	int n = 0;
	while (length--)
	{
		if (*S == ' ')
		{
			ans[n++] = '%';
			ans[n++] = '2';
			ans[n++] = '0';
		}
		else
		{
			ans[n++] = *S;
		}
		S++;
	}
	ans[n] = 0;
	return ans;
}