#define _CRT_SECURE_NO_WARNINGS 1
#include "SList.h"

//void TestSList1()
//{
//	SLTNode* n1 = malloc();
//	SLTNode* n2 = malloc();
//	n1->next = n2;
//
//	SLTNode n1;
//	SLTNode n2;
//	n1.next = &n2;
//}

void TestSList1()
{
	SLTNode* n1 = BuySLTNode(1);
	SLTNode* n2 = BuySLTNode(2);
	SLTNode* n3 = BuySLTNode(3);
	SLTNode* n4 = BuySLTNode(4);
	n1->next = n2;
	n2->next = n3;
	n3->next = n4;
	n4->next = NULL;
}

void TestSList10()
{
	SLTNode* plist = CreateSList(10);
	SLTPrint(plist);
}

void TestSList2()
{
	SLTNode* plist = CreateSList(5);
	SLTPushBack(&plist, 100);
	SLTPushBack(&plist, 200);
	SLTPushBack(&plist, 300);
	SLTPrint(plist);
}

void TestSList3()
{
	SLTNode* plist = NULL;
	SLTPushBack(&plist, 100);
	SLTPushBack(&plist, 200);
	SLTPushBack(&plist, 300);
	SLTPrint(plist);

	SLTPopBack(&plist);
	SLTPrint(plist);

	SLTPopBack(&plist);
	SLTPrint(plist);

	SLTPopBack(&plist);
	SLTPrint(plist);

	SLTPopBack(&plist);
	SLTPrint(plist);
}

void TestSList4()
{
	SLTNode* plist = NULL;
	SLTPushFront(&plist, 100);
	SLTPushFront(&plist, 200);
	SLTPushFront(&plist, 300);
	SLTPushFront(&plist, 400);

	SLTPrint(plist);

	SLTPopFront(&plist);
	SLTPrint(plist);
	SLTPopFront(&plist);
	SLTPrint(plist);
	SLTPopFront(&plist);
	SLTPrint(plist);
	SLTPopFront(&plist);
	SLTPrint(plist);
}

void Swap1(int* p1, int* p2)
{
	int tmp = *p1;
	*p1 = *p2;
	*p2 = tmp;
}

void Swap2(int** pp1, int** pp2)
{
	int* tmp = *pp1;
	*pp1 = *pp2;
	*pp2 = tmp;
}

void TestSList51()
{
	SLTNode* plist = NULL;
	SLTPushBack(&plist, 1);
	SLTPushBack(&plist, 2);
	SLTPushBack(&plist, 3);
	SLTPushBack(&plist, 4);
	SLTPushBack(&plist, 5);
	SLTPrint(plist);

	SLTNode* pos = SLTFind(plist, 3);
	if (pos)
	{
		printf("找到了\n");
	}
	else
	{
		printf("找不到\n");
	}

}


void TestSList5()
{
	SLTNode* plist = NULL;
	SLTPushBack(&plist, 1);
	SLTPushBack(&plist, 2);
	SLTPushBack(&plist, 3);
	SLTPushBack(&plist, 4);
	SLTPushBack(&plist, 5);
	SLTPrint(plist);

	SLTNode* p = SLTFind(plist, 3);
	SLTInsertAfter(p, 30);
	SLTPrint(plist);

	//p = SLTFind(plist, 300);
	//SLTInsertAfter(p, 30);

	p = SLTFind(plist, 2);
	SLTInsert(&plist, p, 20);

	/*if (p)
	{
		SLTInsertAfter(p, 30);
		printf("ҵ\n");
	}
	else
	{
		printf("Ҳ\n");
	}*/

	SLTPrint(plist);
}

void TestSList6()
{
	SLTNode* plist = NULL;
	SLTPushBack(&plist, 1);
	SLTPushBack(&plist, 2);
	SLTPushBack(&plist, 3);
	SLTPushBack(&plist, 4);
	SLTPushBack(&plist, 5);
	SLTPrint(plist);

	SLTNode* p = SLTFind(plist, 3);
	SLTEraseAfter(p);
	SLTPrint(plist);

	p = SLTFind(plist, 3);
	SLTErase(&plist, p);
	p = NULL;
	SLTPrint(plist);

	SLTDestroy(&plist);

	SLTPrint(plist);
}

//int main()
//{
//	TestSList6();
//
//	return 0;
//}

struct ListNode
{
	int val;
	struct ListNode* next;
};

struct ListNode* removeElements(struct ListNode* head, int val) {

	if (head == NULL)
		return NULL;

	struct ListNode* cur = head;
	struct ListNode* newhead, * tail;
	newhead = tail = NULL;

	while (cur)
	{
		if (cur->val != val)
		{
			if (tail == NULL)
			{
				newhead = tail = cur;
			}
			else
			{
				tail->next = cur;
				tail = tail->next;
			}
			cur = cur->next;
		}
		else
		{
			struct ListNode* next = cur->next;
			free(cur);
			cur = next;
		}
	}

	if (tail)
		tail->next = NULL;
	return newhead;
}

struct ListNode* CreateList(int* a, int n)
{
	struct ListNode* phead = NULL, * ptail = NULL;
	int x = 0;
	for (int i = 0; i < n; ++i)
	{
		struct ListNode* newnode = (struct ListNode*)malloc(sizeof(struct ListNode));
		if (newnode == NULL)
		{
			perror("malloc fail");
			exit(-1);
		}
		else
		{
			newnode->val = a[i];
			newnode->next = NULL;
		}

		if (phead == NULL)
		{
			ptail = phead = newnode;
		}
		else
		{
			ptail->next = newnode;
			ptail = newnode;
		}
	}

	return phead;
}

int main()
{
	int a[] = { 1, 2, 6, 3, 4, 5, 6 };
	struct ListNode* plist = CreateList(a, sizeof(a) / sizeof(int));
	SLTPrint(plist);
	removeElements(plist, 6);
	SLTPrint(plist);

	return 0;
}


//int main()
//{
//	TestSList6();
//
//	return 0;
//}
// 
// 
//int main()
//{
//	TestSList10();
//	//int a = 0, b = 1;
//	//Swap1(&a, &b);
//
//	//int* ptr1 = &a, *ptr2 = &b;
//	//Swap2(&ptr1, &ptr2);
//
//	return 0;
//}