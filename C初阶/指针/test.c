#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

// Part. I
// 

//int main()
//{
//	int a = 10;
//	char ch;
//	int * pa = &a;
//	*pa = 20;//�����ò���������ӷ��ʲ�������
//	printf("%d\n", a);
//	//char * pc = &ch;
//
//	//printf("%d\n", sizeof(pa));
//	//printf("%d\n", sizeof(pc));
//
//	//printf("%p\n",  &a);
//	return 0;
//}


//int main()
//{
//	int* pa;
//	char* pc;
//	float* pf;
//
//	printf("%d\n", sizeof(pa));
//	printf("%d\n", sizeof(pc));
//	printf("%d\n", sizeof(pf));
//
//	return 0;
//}


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
//	//int arr[10] = { 0 };
//	//int* p = arr;//����������������Ԫ�صĵ�ַarr->&arr[0];
//
//	//for (int i = 0; i < 10; i++)
//	//{
//	//	*(p + i) = i + 1;
//	//}
//
//	//1~10
//	int arr[10] = { 0 };
//	char* p = arr;
//	
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*p = i + 1;
//		p++;
//	}
//
//	return 0;
//}


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
//	printf("%p\n", &num);
//	return &num;
//}
//
//int main()
//{
//	int* p = test();
//	*p = 200;
//	printf("%d\n", *p);
//	printf("%p\n", p);
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
//	//int* p = NULL;
//	//*p = 20;
//
//	int* p = &a;
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
//	for (int i = 0; i < N_VALUES; i++)
//	{
//		printf("%f\n", values[i]);
//	}
//	return 0;
//}

//int main()
//{
//	//
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



#include <string.h>

//1. ������
//int my_strlen1(char* str)
//{
//	int count = 0;
//	while (*str)
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
////2. �ݹ�İ汾
//
////3. ָ��-ָ��
//int my_strlen2(char* str)
//{
//	char* start = str;
//	while (*str)
//		str++;
//	return str - start;
//}
////
//int main()
//{
//	char arr[] = "abc";
//	int len1 = my_strlen1(arr);
//	int len2 = my_strlen2(arr);
//	printf("%d\n", len1);
//	printf("%d\n", len2);
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
//
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d\n", *(p + i));
//	}
//
//	return 0;
//}





// Part. II

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
int main()
{
	//��һά����ģ��һ����ά����
	int arr1[] = { 1,2,3,4,5 };
	int arr2[] = { 2,3,4,5,6 };
	int arr3[] = { 3,4,5,6,7 };
	int arr4[] = { 4,5,6,7,8 };

	int* arr[4] = {arr1, arr2, arr3, arr4};
	//int i = 0;
	//for (i = 0; i < 4; i++)
	//{
	//	int j = 0;
	//	for (j = 0; j < 5; j++)
	//	{
	//		printf("%d ", *(*(arr+i)+j));
	//	}
	//	printf("\n");
	//}

	int i = 0;
	for (i = 0; i < 4; i++)
	{
		int j = 0;
		for (j = 0; j < 5; j++)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}

	return 0;
}



