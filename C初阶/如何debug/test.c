#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>


// DEBUG and RELEASE
//void test()
//{
//	printf("hehe\n");
//}
//
//int main()
//{
//	int arr[10] = { 1,2,3,4,5 };
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		arr[i] = 0;
//	}
//
//	for (i = 0; i < 10; i++)
//	{
//		test();
//		printf("%d ", arr[i]);
//	}
//
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 1,2,3,4,5 };
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		if (i == 5)
//		{
//			printf("hello\n");
//		}
//		arr[i] = 0;
//	}
//
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//
//	return 0;
//}

//int Add(int x, int y)
//{
//	int z = x + y;
//	return z;
//}
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6 };
//	char ch[] = "abcdef";
//	int a = 10;
//	int b = 20;
//	int ret = Add(a, b);
//	printf("%d\n", ret);
//	return 0;
//}


//void test2()
//{
//	printf("test2\n");
//}
//
//void test1()
//{
//	test2();
//}
//
//void test()
//{
//	test1();
//}
//
//int main()
//{
//	test();
//	return 0;
//}


//ʵ�ִ��룺�� 1�� + 2�� + 3�� ... + n!�������������
//n! = 1*2*3..*n
//

//int main()
//{
//	int n = 0;
//	int i = 0;
//	int ret = 1;
//	int sum = 0;
//	//1!+2!+3! = 1+2+6 = 9
//	for (n = 1; n <= 3; n++)
//	{
//		ret = 1;
//		for (i = 1; i <= n; i++)
//		{
//			ret = ret * i;
//		}
//		sum = sum + ret;
//	}
//	printf("%d\n", sum);
//	return 0;
//}


//int main()
//{
//	int i = 0;
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//
//	printf("%p\n", &i);
//	printf("%p\n", &arr[0]);
//	printf("%p\n", &arr[9]);
//	
//	//0~9
//	for (i = 0; i <= 12; i++)
//	{
//		arr[i] = 0;
//		printf("hello\n");
//	}
//
//	return 0;
//}


//
//<c�����ȱ��>
//
//ģ��ʵ�ֿ⺯����strcpy
#include <string.h>

//void my_strcpy(char* dest, char* src)
//{
//	while (*src != '\0')
//	{
//		*dest++ = *src++;
//	}
//	*dest = *src;
//}

//void my_strcpy(char* dest, char* src)
//{
//	while (*dest++ = *src++)
//	{
//		;
//	}
//}

#include <assert.h>

//void my_strcpy(char* dest, char* src)
//{
//	//assert(dest != NULL);//����
//	//assert(src != NULL);//����
//
//	//assert(dest);//����
//	//assert(src);//����
//
//	assert(dest && src);//����
//
//	while (*dest++ = *src++)
//	{
//		;
//	}
//}
//
//��׳�ԣ�³���ԣ�
//�������ص���Ŀ��ռ����ʼ��ַ
//
//char* my_strcpy(char* dest, const char* src)
//{
//	char* ret = dest;
//	assert(dest && src);//����
//
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	return ret;
//}
//
//int main()
//{
//	char arr1[20] = "xxxxxxxxxx";
//	//xxxxxxxxxx
//	char arr2[] = "hello";
//
//	printf("%s\n", my_strcpy(arr1, arr2));
//
//	return 0;
//}


//const����ָ�룬����*����ߣ���ʾ����ָ��ָ������ݲ���ͨ��ָ�����޸ģ�����ָ�����������޸�
//*p = 0;//err
//p = &ret;//ok
//
//const����ָ�룬����*���ұߣ���ʾ����ָ������������޸ģ�����ָ��ָ������ݿ���ͨ��ָ�����޸�
//p = &ret;//err
//*p = 0;//ok
//

//int main()
//{
//	const int num = 10;
//	//num = 20;//err
//	int ret = 100;
//
//	const int * p = &num;
//	//*p = 20;//err
//	p = &ret;
//
//	printf("%d\n", num);
//	printf("%d\n", *p);
//
//
//	return 0;
//}


//
int my_strlen(const char* str)
{
	assert(str);
	int count = 0;
	while (*str)
	{
		count++;
		str++;
	}
	return count;
}

int main()
{
	char arr[] = "zhizhizhi";
	printf("%d\n", my_strlen(arr));
	return 0;
}
//
//
