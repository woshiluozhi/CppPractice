#define _CRT_SECURE_NO_WARNINGS 1
#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

//struct SListNode
//{
//	SLTDataType data;
//	struct SListNode* next;
//};
//typedef struct SListNode SLTNode;


//void SLTPushBack(SLTDataType x)
//{
//	SLTNode node;
//}

typedef int SLTDataType;

typedef struct SListNode
{
	SLTDataType data;
	struct SListNode* next;
}SLTNode;

SLTNode* BuySLTNode(SLTDataType x);
SLTNode* CreateSList(int n);
void SLTPrint(SLTNode* phead);

void SLTPushBack(SLTNode** pphead, SLTDataType x);
void SLTPopBack(SLTNode** pphead);
void SLTPushFront(SLTNode** pphead, SLTDataType x);
void SLTPopFront(SLTNode** pphead);

SLTNode* SLTFind(SLTNode* plist, SLTDataType x);

// ��������posλ��֮�����x
// ����˼��Ϊʲô����posλ��֮ǰ���룿
void SLTInsertAfter(SLTNode* pos, SLTDataType x);

// ������ɾ��posλ��֮���ֵ
// ����˼��Ϊʲô��ɾ��posλ�ã�
void SLTEraseAfter(SLTNode* pos);

// ��pos֮ǰ����x
void SLTInsert(SLTNode** pphead, SLTNode* pos, SLTDataType x);

// ɾ��posλ��
void SLTErase(SLTNode** pphead, SLTNode* pos);

void SLTDestroy(SLTNode** pphead);