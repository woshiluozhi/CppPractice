#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>



//int main()
//{
//	int num = 10;//向内存申请了4个字节
//	int arr[10];//向内存申请了40个字节
//
//	return 0;
//}
#include <stdlib.h>
#include <errno.h>
#include <string.h>
//INT_MAX
//int main()
//{
//	//int arr[10];//向内存申请了40个字节
//	int* p = (int*)malloc(10*sizeof(int));
//	int* ptr = p;
//	if (p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 1;
//	}
//	//使用
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*ptr = i;
//		ptr++;
//	}
//
//	//释放
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
//	//40个字节 - 10个整型
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
//	//释放
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
//	//...使用
//	if (1)
//		return 2;
//
//	//释放
//	free(p);
//	p = NULL;
//	return 0;
//}
////内存泄漏
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
//	//使用
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
//	//增加空间
//	int* ptr = (int*)realloc(p, 80);
//	//当realloc开辟失败的是，返回的是NULL
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
//	//释放
//	free(p);
//	p = NULL;
//
//	return 0;
//}

int main()
{
	int*p = (int*)realloc(NULL, 40);//等价于malloc(40);
	return 0;
}