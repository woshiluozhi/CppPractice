#define _CRT_SECURE_NO_WARNINGS 1

//#include <stdio.h>

//int main()
//{
//	printf("hello world\n");
//	printf("hehe\n");
//	return 0;
//}

//int main()
//{
//	printf("%d\n", sizeof(char));
//	printf("%d\n", sizeof(short));
//	printf("%d\n", sizeof(int));
//	printf("%d\n", sizeof(long));
//	printf("%d\n", sizeof(long long));
//	printf("%d\n", sizeof(float));
//	printf("%d\n", sizeof(double));
//	printf("%d\n", sizeof(long double));
//
//	char ch = 'w';
//	int weight = 120;
//	int salary = 20000;
//	return 0;
//}

//int global = 2022;
//
//int main()
//{
//	//int global = 2008;
//
//	//int local = 2023;
//	//printf("%d %d", global, local);
//
//	int a = 3;
//	int b = 4;
//	int sum = a + b;
//	printf("%d", sum);
//
//	return 0;
//}

//#define MAX 1000
//enum Gender
//{
//	MALE,
//	FEMALE,
//	UNKNOW
//};
//int main()
//{
//	3.14;
//	100;
//
//	const float pai = 3.14f;
//	//pai = 3.4;
//
//	printf("%d %d %d\n", MALE, FEMALE, UNKNOW);
//	printf("%d\n", MAX);
//	printf("%f\n", pai);
//	printf("3.14");
//	return 0;
//}

//int main()
//{
//	char arr1[] = "luozhi";
//	char arr2[] = { '1','u','o','z','h','i' };
//	char arr3[] = { '1','u','o','z','h','i', '\0'};
//	printf("%s\n", arr1);
//	printf("%s\n", arr2);
//	printf("%s\n", arr3);
//	return 0;
//}

//int main()
//{
//	printf("c:\code\test.c\n");
//	printf("\c\n");
//	printf("%c\n", '\'');
//	printf("%s\n", "\''");
//	/*printf("%s\n", "\''");*/
//	//printf("\6\n");
//
//	return 0;
//}


//int main()
//{
//	int coding = 0;
//	printf("你是否坚持敲代码？(选择1或者0):>\n");
//	scanf("%d", &coding);
//	if (1 == coding)
//	{
//		printf("好offer!");
//	}
//	else
//	{
//		printf("毕业就失业！");
//	}
//	return 0;
//}

//int main()
//{
//	printf("开始学习！");
//	int line = 0;
//	while (line < 20000)
//	{
//		line++;
//		printf("还要继续努力！\n");
//	}
//	if (line >= 20000)
//	{
//		printf("好offer！\n");
//	}
//	return 0;
//}

//int add(int a, int b)
//{
//	return a + b;
//}
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int sum = 0;
//	scanf("%d %d", &a, &b);
//	sum = add(a, b);
//	printf("%d加%d等于%d", a, b, sum);
//}

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//int main()
//{
//	int i = 10;
//	i >> 2;
//	printf("%d", i);
//}


//typedef unsigned int uint;
//int main()
//{
//	
//	unsigned int a = 10;
//	uint b = 10;
//	printf("%d %d", a, b);
//	return 0;
//}

//void test()
//{
//	int i = 10;
//	//static int i = 10;
//	i++;
//	printf("%d ", i);
//}
//int main()
//{
//	for (int i = 0; i < 10; i++)
//	{
//		test();
//	}
//	return 0;
//}

//extern int g_val;
//
//int main()
//{
//	printf("%d", g_val);
//	return 0;
//}

//int Add(int, int);
//
//int main()
//{
//	printf("%d", Add(4, 7));
//}

//#define PAI 3.14
//#define ADD(x, y)((x) + (y))
//
//#include <stdio.h>
//
//int main()
//{
//	printf("%lf", ADD(PAI, 1));
//	return 0;
//}

#include <stdio.h>

//int main()
//{
//	int i = 10000;
//	printf("%d", sizeof(int*));
//	return 0;
//}

//int main()
//{
//	int num = 10;
//	int* p;
//	p = &num;
//	printf("%d\n", *p);
//	*p = 20;
//	printf("%d\n", *p);
//	char ch = 'l';
//	printf("%c\n", ch);
//	char* pc = &ch;
//	*pc = 'z';
//	printf("%c\n", ch);
//	return 0;
//}

//int main()
//{
//	printf("%d\n", sizeof(char*));
//	printf("%d\n", sizeof(short*));
//	printf("%d\n", sizeof(int*));
//	printf("%d\n", sizeof(long*));
//	printf("%d\n", sizeof(long long*));
//	printf("%d\n", sizeof(float*));
//	printf("%d\n", sizeof(double*));
//	printf("%d\n", sizeof(long double*));
//}

//struct stu
//{
//	char name[20];
//	int age;
//	char gender[20];
//	char id[20];
//};
//
//int main()
//{
//	stu luo = { "zhi", 26, "MALE", "202209140411" };
//	printf("%s %d %s %s\n", luo.name, luo.age, luo.gender, luo.id);
//
//	stu* ps = &luo;
//	printf("%s %d %s %s\n", ps->name, ps->age, ps->gender, ps->id);
//	return 0;
//}

//#include <string.h>
//int main()
//{
//	printf("c:\test\121\n");
//	printf("%d\n", strlen("c:\test\121"));
//	printf("c:\t\t\test\121\n");
//	printf("%d\n", strlen("c:\t\t\test\121"));
//	printf("c:\t\t\test\121\q\n");
//	printf("%d\n", strlen("c:\t\t\test\121\q"));
//	return 0;	 
//}

//int get_max(int a, int b)
//{
//	if (a < b)
//	{
//		int tmp = a;
//		a = b;
//		b = tmp;
//	}
//	return a;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 100;
//	printf("%d", get_max(a, b));
//	return 0;
//}


//int main()
//{
//    int a = 40;
//    int c = 212;
//    printf("%d", (-8 + 22) * a - 10 + c / 2);
//    return 0;
//}

//int main()
//{
//    int iq = 0;
//    //while (~scanf("%d", &iq))
//    while (scanf("%d", &iq) != EOF)
//    {
//        if (iq >= 140)
//        printf("Genius");
//    }
//    return 0;
//}


//int main()
//{
//    int p = printf("Hello world!");
//    //printf("Hello world!\n");
//    printf("\n%d", p);
//    return 0;
//}

int main()
{
    char ch = 70;
    printf("%c", ch);
    scanf("%c", &ch);
    if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
        printf("YES");
    else
        printf("NO");
    return 0;
}

