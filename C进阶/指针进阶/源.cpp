#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//����ָ��

//int main()
//{
//	int a = 10;
//	int*p1 = &a;
//
//	char ch = 'w';
//	char* p2 = &ch;
//
//	char arr[6] = {0};
//	char (*p3)[6] = &arr;
//
//	return 0;
//}

//����ָ�뵽����ô�ã�

//void print1(int arr[10], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//
//void print1(int *arr, int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *(arr+i));
//	}
//	printf("\n");
//}
//
//void print2(int(*p)[10], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", (*p)[i]);//arr;
//	}
//	printf("\n");
//}
//
//void test1()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//	//print1(arr, sz);
//	print2(&arr, sz);
//}
//
//void print3(int arr[3][5], int r, int c)
//{		 
//	int i = 0;
//	for (i = 0; i < r; i++)
//	{
//		int j = 0;
//		for (j = 0; j < c; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//}
//
//void print4(int (*p)[5], int r, int c)
//{
//	int i = 0;
//	for (i = 0; i < r; i++)
//	{
//		int j = 0;
//		for (j = 0; j < c; j++)
//		{
//			printf("%d ", *(*(p + i) + j));
//		}
//		printf("\n");
//	}
//}
//
//void test2()
//{
//	int arr[3][5] = { {1,2,3,4,5},{2,3,4,5,6},{3,4,5,6,7} };
//	//print3(arr, 3, 5);
//	print4(arr, 3, 5);
//}
//
//int main()
//{
//	//test1();
//	test2();
//	return 0;
//}

//
//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int main()
//{
//	//pf���Ǻ���ָ�����
//	//int (*pf)(int x, int y) = &Add;
//	int (* pf)(int x, int y) = Add;
//	int sum = (*pf)(3, 5);
//	//int sum = Add(3, 5);
//
//	printf("%d\n", sum);
//
//	//int arr[10] = {0};
//	//int (*p)[10] = &arr;
//	//printf("%p\n", &arr);//ȡ������ĵ�ַ
//	//printf("%p\n", arr);//ȡ������ĵ�ַ
//
//	//Add �� &Add���Ǻ����ĵ�ַ��û������
//	//printf("%p\n", Add);
//	//printf("%p\n", &Add);
//
//	
//
//	return 0;
//}

//int test(const char* str, double d)
//{
//
//}
//
//int main()
//{
//	//int (*pt)(const char*, double) = &test;
//	//int (*pt)(const char* str, double d) = &test;
//
//	return 0;
//}
//void (* )();


//typedef unsigned int uint;
//
//int main()
//{
//	//0 - int
//	//( void (*)() )0 - ��0����һ�������ĵ�ַ
//	//
//	//( *( void (*)() )0 )();
//	//
//	//��0ֱ��ת����һ��void (*)()�ĺ���ָ�룬Ȼ��ȥ����0��ַ���ĺ���
//	//int float
//	void(*signal(int, void(*)(int)))(int);
//
//	typedef void(*pf_t)(int) ;
//	pf_t signal( int, pf_t);
//
//	//
//	//����������һ�κ�������
//	//�����ĺ����У�signal
//	//signal�����ĵ�һ��������int���͵�
//	//signal�����ĵڶ���������һ������ָ�����ͣ��ú���ָ��ָ��ĺ���������int������������void
//	//signal�����ķ�������Ҳ��һ������ָ�����ͣ��ú���ָ��ָ��ĺ���������int������������void
//	//void (*)(int) signal(int, void(*)(int)); //err
//
//	return 0;
//}

//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int main()
//{
//	int (*pf)(int, int) = Add;
//
//	return 0;
//}
//
//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int Sub(int x, int y)
//{
//	return x - y;
//}
//
//int main()
//{
//	//����ָ������
//	//���Դ�Ŷ����������ͬ������������ͬ���ĺ����ĵ�ַ
//	int (* pfArr[2])(int, int) = {Add, Sub};
//	
//	int ret = pfArr[0](2, 3);
//	printf("%d\n", ret);
//	
//	ret = pfArr[1](2, 3);
//	printf("%d\n", ret);
//
//	return 0;
//}

//
//дһ��������
//�����ļӡ������ˡ���
//
//
//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int Sub(int x, int y)
//{
//	return x - y;
//}
//
//int Mul(int x, int y)
//{
//	return x * y;
//}
//
//int Div(int x, int y)
//{
//	return x / y;
//}
//
//
//void menu()
//{
//	printf("***************************\n");
//	printf("***** 1.add    2. sub  ****\n");
//	printf("***** 3.mul    4. div  ****\n");
//	printf("***** 0.exit           ****\n");
//	printf("***************************\n");
//}
//
//int main()
//{
//	int input = 0;
//	int x = 0;
//	int y = 0;
//	int ret = 0;
//	do
//	{
//		menu();
//		printf("��ѡ��:>");
//		scanf("%d", &input);
//		
//		switch (input)
//		{
//		case 1:
//			printf("������2��������:>");
//			scanf("%d %d", &x, &y);
//			ret = Add(x, y);
//			printf("%d\n", ret);
//			break;
//		case 2:	
//			printf("������2��������:>");
//			scanf("%d %d", &x, &y);
//			ret = Sub(x, y);
//			printf("%d\n", ret);
//			break;
//		case 3:
//			printf("������2��������:>");
//			scanf("%d %d", &x, &y);
//			ret = Mul(x, y);
//			printf("%d\n", ret);
//			break;
//		case 4:
//			printf("������2��������:>");
//			scanf("%d %d", &x, &y);
//			ret = Div(x, y);
//			printf("%d\n", ret);
//			break;
//		case 0:
//			printf("�˳�������\n");
//			break;
//		default:
//			printf("ѡ�����\n");
//			break;
//		}
//	} while (input);
//}

//��һ�´���
//
//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int Sub(int x, int y)
//{
//	return x - y;
//}
//
//int Mul(int x, int y)
//{
//	return x * y;
//}
//
//int Div(int x, int y)
//{
//	return x / y;
//}
//
//
//void menu()
//{
//	printf("***************************\n");
//	printf("***** 1.add    2. sub  ****\n");
//	printf("***** 3.mul    4. div  ****\n");
//	printf("***** 0.exit           ****\n");
//	printf("***************************\n");
//}
//
//int main()
//{
//	int input = 0;
//	int x = 0;
//	int y = 0;
//	int ret = 0;
//
//	//����ָ������   - ת�Ʊ�
//	int (*pfArr[])(int, int) = { 0, Add, Sub, Mul, Div };
//
//	do
//	{
//		menu();
//		printf("��ѡ��:>");
//		scanf("%d", &input);
//		if (input == 0)
//		{
//			printf("�˳�������\n");
//			break;
//		}
//
//		if (input >= 1 && input <= 4)
//		{
//			printf("������2��������:>");
//			scanf("%d %d", &x, &y);
//			ret = pfArr[input](x, y);
//			printf("%d\n", ret);
//		}
//		else
//		{
//			printf("ѡ�����\n");
//		}	
//	} while (input);
//}