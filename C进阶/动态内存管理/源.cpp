#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>



//int main()
//{
//	int num = 10;//���ڴ�������4���ֽ�
//	int arr[10];//���ڴ�������40���ֽ�
//
//	return 0;
//}
#include <stdlib.h>
#include <errno.h>
#include <string.h>
//INT_MAX
//int main()
//{
//	//int arr[10];//���ڴ�������40���ֽ�
//	int* p = (int*)malloc(10*sizeof(int));
//	int* ptr = p;
//	if (p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 1;
//	}
//	//ʹ��
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*ptr = i;
//		ptr++;
//	}
//
//	//�ͷ�
//	free(p);
//	p = NULL;
//  ptr = NULL;
//	return 0;
//}


//int main()
//{
//	while (1)
//	{
//		malloc(10);
//	}
//	return 0;
//}

//calloc
//
//int main()
//{
//	//40���ֽ� - 10������
//	//malloc(40);
//	int* p = (int*)calloc(10, sizeof(int));
//	if (p == NULL)
//	{
//		perror("calloc");
//		return 1;
//	}
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = i;
//	}
//	//�ͷ�
//	free(p);
//	p = NULL;
//
//	return 0;
//}

//calloc = malloc+memset


//
//int test()
//{
//	int*p = (int*)malloc(40);
//	if (p == NULL)
//	{
//		//
//		return 1;
//	}
//	//...ʹ��
//	if (1)
//		return 2;
//
//	//�ͷ�
//	free(p);
//	p = NULL;
//	return 0;
//}
////�ڴ�й©
//
//int main()
//{
//	test();
//	return 0;
//}
//
//void test()
//{
//	int num = 10;
//    //
//
//}
//
//int main()
//{
//	{
//		int a = 10;
//		printf("a=%d\n", a);
//	}
//
//	printf("a=%d\n", a);
//
//	return 0;
//}
//

//int main()
//{
//	int num = 10;
//	int* p = NULL;
//
//
//	free(p);
//	p = NULL;
//	
//	return 0;
//}
//
//int main()
//{
//	int* p = (int*)malloc(40);
//	if (p == NULL)
//		return 1;
//	//ʹ��
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = i;
//	}
//	//
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//	//���ӿռ�
//	int* ptr = (int*)realloc(p, 80);
//	//��realloc����ʧ�ܵ��ǣ����ص���NULL
//	//....
//	if (ptr != NULL)
//	{
//		p = ptr;
//		ptr = NULL;
//	}
//	
//	for (i = 10; i < 20; i++)
//	{
//		*(p + i) = i;
//	}
//	
//	//�ͷ�
//	free(p);
//	p = NULL;
//
//	return 0;
//}

int main()
{
	int*p = (int*)realloc(NULL, 40);//�ȼ���malloc(40);
	return 0;
}