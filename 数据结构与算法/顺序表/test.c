#define _CRT_SECURE_NO_WARNINGS 1
//#include "SeqList.h"
//
//void TestSeqList1()
//{
//	SL sl;
//	SLInit(&sl);
//	SLPushBack(&sl, 1);
//	SLPushBack(&sl, 2);
//	SLPushBack(&sl, 3);
//	SLPushBack(&sl, 4);
//	SLPushBack(&sl, 5);
//	SLPushBack(&sl, 5);
//	SLPushBack(&sl, 5);
//	SLPushBack(&sl, 5);
//	SLPushBack(&sl, 5);
//
//
//	SLPrint(&sl);
//
//	SLDestroy(&sl);
//}
//
//void TestSeqList2()
//{
//
//	SL sl;
//	SLInit(&sl);
//	SLPushBack(&sl, 1);
//	SLPushBack(&sl, 2);
//	SLPushBack(&sl, 3);
//	SLPushBack(&sl, 4);
//	SLPrint(&sl);
//
//	SLPopBack(&sl);
//	SLPrint(&sl);
//
//	SLPushBack(&sl, 8);
//	SLPrint(&sl);
//
//	SLPopBack(&sl);
//	SLPopBack(&sl);
//	SLPopBack(&sl);
//	SLPopBack(&sl);
//	//SLPopBack(&sl);
//
//	SLPrint(&sl);
//
//	SLPushBack(&sl, 1);
//	SLPushBack(&sl, 2);
//	SLPrint(&sl);
//
//	SLDestroy(&sl);
//}
//
////int main()
////{
////	//TestSeqList2();
////	TestSeqList1();
////
////	/*int* p1 = malloc(4);
////	int* p2 = realloc(p1, 20);
////	int* p3 = realloc(p2, 2000);*/
////
////	return 0;
////}
//
//int main()
//{
//	TestSeqList2();
//
//	return 0;
//}


//Day2

#include "SeqList.h"

void TestSeqList1()
{
	SL sl;
	SLInit(&sl);
	SLPushBack(&sl, 1);
	SLPushBack(&sl, 2);
	SLPushBack(&sl, 3);
	SLPushBack(&sl, 4);
	SLPushBack(&sl, 5);
	SLPushBack(&sl, 5);
	SLPushBack(&sl, 5);
	SLPushBack(&sl, 5);
	SLPushBack(&sl, 5);


	SLPrint(&sl);

	SLDestroy(&sl);
}

void TestSeqList2()
{
	/*SL* s = NULL;
	SLInit(s);*/

	SL sl;
	SLInit(&sl);
	SLPushBack(&sl, 1);
	SLPushBack(&sl, 2);
	SLPushBack(&sl, 3);
	SLPushBack(&sl, 4);
	SLPrint(&sl);

	SLPopBack(&sl);
	SLPrint(&sl);

	SLPushBack(&sl, 8);
	SLPrint(&sl);

	SLPopBack(&sl);
	SLPopBack(&sl);
	SLPopBack(&sl);
	SLPopBack(&sl);
	//SLPopBack(&sl);

	SLPrint(&sl);

	SLPushBack(&sl, 1);
	//SLPushBack(&sl, 2);
	SLPushBack(&sl, 2);
	SLPushBack(&sl, 2);


	SLDestroy(&sl);
}

void TestSeqList3()
{
	SL sl;
	SLInit(&sl);

	SLPushFront(&sl, 1);
	SLPushFront(&sl, 2);
	SLPushFront(&sl, 3);
	SLPushFront(&sl, 4);

	SLPrint(&sl);

	SLPopFront(&sl);
	SLPopFront(&sl);
	SLPopFront(&sl);
	SLPopFront(&sl);
	//SLPopFront(&sl);
	SLPrint(&sl);

	SLPushBack(&sl, 10);
	SLPrint(&sl);

	SLDestroy(&sl);
}

void TestSeqList4()
{
	SL sl;
	SLInit(&sl);
	SLPushBack(&sl, 1);
	SLPushBack(&sl, 2);
	SLPushBack(&sl, 3);
	SLPushBack(&sl, 4);
	SLPrint(&sl);

	SLInsert(&sl, 2, 20);
	SLPrint(&sl);

	SLInsert(&sl, 5, 500);
	SLPrint(&sl);

	SLInsert(&sl, 0, 500);
	SLPrint(&sl);

	SLDestroy(&sl);
}

void TestSeqList5()
{
	SL sl;
	SLInit(&sl);
	SLPushBack(&sl, 1);
	SLPushBack(&sl, 2);
	SLPushBack(&sl, 3);
	SLPushBack(&sl, 4);
	SLPrint(&sl);

	SLErase(&sl, 2);
	SLPrint(&sl);

	SLErase(&sl, 2);
	SLPrint(&sl);

	SLErase(&sl, 0);
	SLPrint(&sl);

	SLDestroy(&sl);
}

void TestSeqList6()
{
	SL sl;
	SLInit(&sl);
	SLPushBack(&sl, 1);
	SLPushBack(&sl, 2);
	SLPushBack(&sl, 3);
	SLPushBack(&sl, 4);
	SLPushBack(&sl, 5);
	SLPushBack(&sl, 7);
	SLPushBack(&sl, 5);
	SLPushBack(&sl, 8);
	SLPushBack(&sl, 5);
	SLPrint(&sl);

	/*int pos = SLFind(&sl, 5);
	if (pos != -1)
	{
		SLErase(&sl, pos);
	}
	SLPrint(&sl);*/

	//int pos = SLFind(&sl, 4, 0);
	//if (pos != -1)
	//{
	//	SLErase(&sl, pos);
	//}
	//SLPrint(&sl);

	// 删除顺序表所有的5
	int pos = SLFind(&sl, 5, 0);
	while (pos != -1)
	{
		SLErase(&sl, pos);

		pos = SLFind(&sl, 5, pos);
	}
	SLPrint(&sl);

	SLDestroy(&sl);
}

//int main()
//{
//	TestSeqList6();
//
//	/*int* p1 = malloc(4);
//	int* p2 = realloc(p1, 20);
//	int* p3 = realloc(p2, 2000);*/
//
//	//int a[10] = { 0 };
//
//	//// 越界读，基本不会被检查出来
//	//printf("%d\n", a[10]);
//	//printf("%d\n", a[11]);
//
//	//// 越界写，可能会被检查出来。检查--查酒驾一样，抽查
//	////a[10] = 0;
//	//a[11] = 0;
//	//a[12] = 0;
//	////a[13] = 0;
//	//a[14] = 0;
//	//a[20] = 0;
//
//	return 0;
//}

void menu()
{
	printf("***********************************************\n");
	printf("1、尾插数据 2、尾删数据\n");
	printf("3、头插数据 4、头删数据\n");
	printf("5、打印数据 -1、退出\n");
	printf("***********************************************\n");
}

int main()
{
	SL s;
	SLInit(&s);
	int option = 0;
	int val = 0;
	do
	{
		menu();
		printf("请输入你的操作:>");
		scanf("%d", &option);
		switch (option)
		{
		case 1:
			printf("请依次输入你要尾插的数据，以-1结束\n");
			scanf("%d", &val);
			while (val != -1)
			{
				SLPushBack(&s, val);
				scanf("%d", &val);
			}
			break;
		case 2:
			SLPopBack(&s);
			break;
		case 3:
			break;
		case 4:
			break;
		case 5:
			SLPrint(&s);
			break;
		default:
			break;
		}
	} while (option != -1);

	SLDestroy(&s);

	return 0;
}