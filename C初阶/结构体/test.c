#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//学生
//名字+年龄+性别+身高
//
//struct Stu
//{
//	char name[20];//名字
//	int age;//年龄
//	char gender[5];//性别
//	int hight;//身高
//}s1,s2,s3;//全局变量
////
//struct Stu s5;
//
//int main()
//{
//	struct Stu s4;//局部变量
//
//	return 0;
//}



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
//	//struct S ss = { 'x', {100, 200}, 3.14, "hello"};
//	struct S ss = {.d=3.14, .c = 'x', .p.x =100};
//	printf("%c %d %d %lf %s\n", ss.c, ss.p.x, ss.p.y, ss.d, ss.str);
//
//	struct Point p = {10, 20};
//	struct Stu s = {"zhangsan", 20, "男", 180};
//	printf("x=%d y=%d\n", p.x, p.y);
//	printf("%s %d %s %d\n", s.name, s.age, s.sex, s.hight);
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
//	struct S s = {.age=20, .name = "LZ"};
//	printf("%s %d\n", s.name, s.age);
//	s.age = 21;
//	//*char*
//	//s.name = "zhangsanfeng";//err
//	strcpy(s.name, "QQJ");
//	printf("%s %d\n", s.name, s.age);
//
//	return 0;
//}


struct S
{
	int data[1000];
	char buf[100];
};

//结构体变量.结构体成员名
//结构体指针->结构体成员名

void print1(struct S ss)
{
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		printf("%d ", ss.data[i]);
	}
	printf("%s\n", ss.buf);
}

void print2(struct S* ps)
{
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		printf("%d ", ps->data[i]);
	}
	printf("%s\n", ps->buf);
}

int main()
{
	struct S s = { {1,2,3} , "hello world"};
	print1(s);//传值调用
	print2(&s);//传址调用
	return 0;
}


