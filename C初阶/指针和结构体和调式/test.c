#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//int main()
//{
//	int a = 1000;
//	char ch;
//	int * pa = &a;
//	*pa = 20;//�����ò���������ӷ��ʲ�������
//	printf("%d\n", a);
//	char * pc = &ch;
//
//	printf("%d\n", sizeof(pa));
//	printf("%d\n", sizeof(pc));
//
//	printf("%p\n",  &a);
//	return 0;
//}


//int main()
//{
//	int* pa;
//	char* pc;
//	float* pf;
//
//	//ptr_t p;
//
//	printf("%d\n", sizeof(pa));
//	printf("%d\n", sizeof(pc));
//	printf("%d\n", sizeof(pf));
//
//	return 0;
//}
//
//int main()
//{
//	int a = 0x11223344;
//	//int*pa = &a;
//	//*pa = 0;
//	char* pc = &a;
//	*pc = 0;
//
//	return 0;
//}



//int main()
//{
//	int a = 0x11223344;
//	int*  pa = &a;
//	char* pc = &a;
//
//	printf("pa=%p\n", pa);
//	printf("pc=%p\n", pc);
//
//	printf("pa+1=%p\n", pa -1);
//	printf("pc+1=%p\n", pc -1);
//
//	return 0;
//}


//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr;//����������������Ԫ�صĵ�ַarr->&arr[0];
//
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = i + 1;
//	}
//
//	//1~10
//	//char* p = arr;
//	
//	//int i = 0;
//	//for (i = 0; i < 10; i++)
//	//{
//	//	*p = i + 1;
//	//	p++;
//	//}
//
//	return 0;
//}
//

//int main()
//{
//	int* p;//p����Ұָ��
//	*p = 20;
//
//	return 0;
//}

//int main()
//{
//	int arr[10] = {0};
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int* p = arr;
//	for (i = 0; i <= sz; i++)
//	{
//		*p = i;
//		p++;
//	}
//
//	return 0;
//}


//int* test()
//{
//	int num = 100;
//	return &num;
//}
//
//int main()
//{
//	int* p = test();
//	*p = 200;
//
//	return 0;
//}


//int main()
//{
//	int a = 10;
//	int* pa = &a;//��ȷ��ʼ��
//
//	//NULL - 0�����ǳ�ʼ��ָ���
//	int* p = NULL;
//
//
//	return 0;
//}

//
//int main()
//{
//	int a = 10;
//	int* p = NULL;
//	//*p = 20;
//
//	//int* p = &a;
//
//	if (p != NULL)
//	{
//		printf("%d\n", *p);
//	}
//
//	return 0;
//}

//int main()
//{
//	double arr[5] = {0};
//	double* p = arr;
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		printf("%lf ", *(p + i));
//	}
//
//	return 0;
//}
//
//#define N_VALUES 5
//float values[N_VALUES];
//float* vp;
//
//int main()
//{
//	for (vp = &values[N_VALUES - 1]; vp >= &values[0]; vp--)
//	{
//		*vp = 1;
//	}
//	return 0;
//}

//int main()
//{
//	//����ָ�������ǰ���ǣ�ָ��ָ���ͬһ�������Ŀռ�
//	int arr[10] = {0};
//	printf("%d\n", &arr[9] - &arr[0]);
//	printf("%d\n", &arr[0] - &arr[9]);
//
//	int a = 10;
//	char c = 'w';
//	printf("%d\n", &a - &c);//err
//
//	return 0;
//}
//


#include <string.h>

//1. ������
//int my_strlen(char* str)
//{
//	int count = 0;
//	while (*str)
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//2. �ݹ�İ汾

//3. ָ��-ָ��
//int my_strlen(char* str)
//{
//	char* start = str;
//	while (*str)
//		str++;
//	return str - start;
//}
//
//int main()
//{
//	char arr[] = "abc";
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//
//	return 0;
//}
//

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* p = arr;
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	/*for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *p);
//		p++;
//	}*/
//
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//
//	return 0;
//}


//int main()
//{
//	int a = 10;//
//	int* p = &a;//p����ָ�������һ��ָ�����
//	int** pp = &p;//pp�Ͷ���ָ��
//
//	//*(*pp) = 200;
//	**pp = 200;
//	//*p = 20;
//	printf("%d\n", a);
//
//	return 0;
//}

//int main()
//{
//	int a = 10;//
//	int* p = &a;//p����ָ�������һ��ָ�����
//	int** pp = &p;//pp�Ͷ���ָ��
//	int*** ppp = &pp;
//	int**** pppp = &ppp;
//
//
//	return 0;
//}



//int main()
//{
//	//��������-������͵�����
//	int arr[10];
//	//�ַ�����-����ַ�������
//	char arr2[5];
//	//ָ������-���ָ�������
//	int* arr3[5];//�������ָ�������
//	char* arr4[6];//����ַ�ָ�������
//
//	return 0;
//}


//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = 30;
//	int d = 40;
//	int e = 50;
//
//	int* arr3[5] = {&a, &b, &c, &d, &e};//�������ָ�������
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d ", *(arr3[i]));
//	}
//
//	return 0;
//}

//
//int main()
//{
//	//��һά����ģ��һ����ά����
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[] = { 2,3,4,5,6 };
//	int arr3[] = { 3,4,5,6,7 };
//	int arr4[] = { 4,5,6,7,8 };
//
//	int* arr[4] = {arr1, arr2, arr3, arr4};
//	int i = 0;
//	for (i = 0; i < 4; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 5; j++)
//		{
//			printf("%d ", *(*(arr+i)+j));
//		}
//		printf("\n");
//	}
//
//	//int i = 0;
//	//for (i = 0; i < 4; i++)
//	//{
//	//	int j = 0;
//	//	for (j = 0; j < 5; j++)
//	//	{
//	//		printf("%d ", arr[i][j]);
//	//	}
//	//	printf("\n");
//	//}
//
//	return 0;
//}
//




//STRUCTURE




//ѧ��
//����+����+�Ա�+���
//
//struct Stu
//{
//	char name[20];//����
//	int age;//����
//	char sex[5];//�Ա�
//	int hight;//���
//}s1,s2,s3;//ȫ�ֱ���
//
//struct Stu s5;
//
//int main()
//{
//	struct Stu s4;//�ֲ�����
//
//	return 0;
//}
//
//struct Point
//{
//	int x;
//	int y;
//};
//
//
//struct Stu
//{
//	char name[20];//����
//	int age;//����
//	char sex[5];//�Ա�
//	int hight;//���
//};
//
//struct S
//{
//	char c;
//	struct Point p;
//	double d;
//	char str[20];
//};
//
//int main()
//{
//	//struct S ss = { 'x', {100, 200}, 3.14, "hehe"};
//	struct S ss = {.d=3.14, .c = 'x', .p.x =100};
//	printf("%c %d %d %lf %s\n", ss.c, ss.p.x, ss.p.y, ss.d, ss.str);
//
//	//struct Point p = {10, 20};
//	//struct Stu s = {"zhangsan", 20, "��", 180};
//	//printf("x=%d y=%d\n", p.x, p.y);
//	//printf("%s %d %s %d\n", s.name, s.age, s.sex, s.hight);
//
//	return 0;
//}
//
//

//struct S
//{
//	char name[20];
//	int age;
//};
//
//int main()
//{
//	struct S s = {.age=20, .name = "zhansgan"};
//	printf("%s %d\n", s.name, s.age);
//	s.age = 30;
//	//*char*
//	//s.name = "zhangsanfeng";//err
//	strcpy(s.name, "zhsangsanfeng");
//	printf("%s %d\n", s.name, s.age);
//
//	return 0;
//}

//
//struct S
//{
//	int data[1000];
//	char buf[100];
//};
//
////�ṹ�����.�ṹ���Ա��
////�ṹ��ָ��->�ṹ���Ա��
//
//void print1(struct S ss)
//{
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", ss.data[i]);
//	}
//	printf("%s\n", ss.buf);
//}
//
//void print2(struct S* ps)
//{
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", ps->data[i]);
//	}
//	printf("%s\n", ps->buf);
//}
//
//int main()
//{
//	struct S s = { {1,2,3} , "hehe"};
//	print1(s);//��ֵ����
//	print2(&s);//��ַ����
//	return 0;
//}
//












//DEBUG

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
//			printf("hehe\n");
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



int Add(int x, int y)
{
	int z = x + y;
	return z;
}

int main()
{
	int arr[] = { 1,2,3,4,5,6 };
	char ch[] = "abcdef";
	int a = 10;
	int b = 20;
	int ret = Add(a, b);
	printf("%d\n", ret);
	return 0;
}

//
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
//

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


//#include <stdio.h>
//
//int main()
//{
//	int i = 0;
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//
//	//printf("%p\n", &i);
//	//printf("%p\n", &arr[0]);
//	//printf("%p\n", &arr[9]);
//	
//	//0~9
//	for (i = 0; i <= 12; i++)
//	{
//		arr[i] = 0;
//		printf("hehe\n");
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
//	//*p = 20;
//	//p = &ret;
//
//	printf("%d\n", num);
//	printf("%d\n", *p);
//
//
//	return 0;
//}
//

//
//int my_strlen(const char* str)
//{
//	assert(str);
//	int count = 0;
//	while (*str)
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//
//
