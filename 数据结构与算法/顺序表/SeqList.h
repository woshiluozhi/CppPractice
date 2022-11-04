#define _CRT_SECURE_NO_WARNINGS 1
#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>



//#define N  10000
//
//typedef int SLDataType;
//typedef struct SeqList
//{
//	SLDataType a[N];
//	int size; // ��¼�洢���ٸ���Ч����
//}SL;




typedef int SLDataType;
typedef struct SeqList
{
	SLDataType* a;
	int size;       // ��¼�洢���ٸ���Ч����
	int capacity;   // �ռ�������С 
}SL;


void SLInit(SL* ps);
void SLDestroy(SL* ps);

void SLPrint(SL* ps);
void SLCheckCapacity(SL* ps);

// β��βɾt
void SLPushBack(SL* ps, SLDataType x);
void SLPopBack(SL* ps);

// ͷ��ͷɾ
void SLPushFront(SL* ps, SLDataType x);
void SLPopFront(SL* ps);

// �м����ɾ��
// ��posλ�ò�������
void SLInsert(SL* ps, int pos, SLDataType x);
// ɾ��posλ������
void SLErase(SL* ps, int pos);

// begin����x����ʼλ��
int SLFind(SL* ps, SLDataType x, int begin);