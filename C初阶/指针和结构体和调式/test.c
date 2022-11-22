#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//int main()
//{
//	int a = 1000;
//	char ch;
//	int * pa = &a;
//	*pa = 20;//解引用操作符（间接访问操作符）
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
//	int* p = arr;//数组名就是数组首元素的地址arr->&arr[0];
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
//	int* p;//p就是野指针
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
//	int* pa = &a;//明确初始化
//
//	//NULL - 0，就是初始化指针的
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
//	//两个指针相减的前提是：指针指向的同一块连续的空间
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

//1. 计数器
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
//2. 递归的版本

//3. 指针-指针
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
//	int* p = &a;//p就是指针变量，一级指针变量
//	int** pp = &p;//pp就二级指针
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
//	int* p = &a;//p就是指针变量，一级指针变量
//	int** pp = &p;//pp就二级指针
//	int*** ppp = &pp;
//	int**** pppp = &ppp;
//
//
//	return 0;
//}



//int main()
//{
//	//整型数组-存放整型的数组
//	int arr[10];
//	//字符数组-存放字符的数组
//	char arr2[5];
//	//指针数组-存放指针的数组
//	int* arr3[5];//存放整型指针的数组
//	char* arr4[6];//存放字符指针的数组
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
//	int* arr3[5] = {&a, &b, &c, &d, &e};//存放整型指针的数组
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
//	//用一维数组模拟一个二维数组
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




//学生
//名字+年龄+性别+身高
//
//struct Stu
//{
//	char name[20];//名字
//	int age;//年龄
//	char sex[5];//性别
//	int hight;//身高
//}s1,s2,s3;//全局变量
//
//struct Stu s5;
//
//int main()
//{
//	struct Stu s4;//局部变量
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
//	char name[20];//名字
//	int age;//年龄
//	char sex[5];//性别
//	int hight;//身高
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
//	//struct Stu s = {"zhangsan", 20, "男", 180};
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
////结构体变量.结构体成员名
////结构体指针->结构体成员名
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
//	print1(s);//传值调用
//	print2(&s);//传址调用
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

//实现代码：求 1！ + 2！ + 3！ ... + n!；不考虑溢出。
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
//<c陷阱和缺陷>
//
//模拟实现库函数：strcpy
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
//	//assert(dest != NULL);//断言
//	//assert(src != NULL);//断言
//
//	//assert(dest);//断言
//	//assert(src);//断言
//
//	assert(dest && src);//断言
//
//	while (*dest++ = *src++)
//	{
//		;
//	}
//}
//
//健壮性（鲁棒性）
//函数返回的是目标空间的起始地址
//
//char* my_strcpy(char* dest, const char* src)
//{
//	char* ret = dest;
//	assert(dest && src);//断言
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


//const修饰指针，放在*的左边，表示的是指针指向的内容不能通过指针来修改，但是指针变量本身可修改
//*p = 0;//err
//p = &ret;//ok
//
//const修饰指针，放在*的右边，表示的是指针变量本身不能修改，但是指针指向的内容可以通过指针来修改
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
