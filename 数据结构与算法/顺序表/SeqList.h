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
//	int size; // 记录存储多少个有效数据
//}SL;




typedef int SLDataType;
typedef struct SeqList
{
	SLDataType* a;
	int size;       // 记录存储多少个有效数据
	int capacity;   // 空间容量大小 
}SL;


void SLInit(SL* ps);
void SLDestroy(SL* ps);

void SLPrint(SL* ps);
void SLCheckCapacity(SL* ps);

// 尾插尾删t
void SLPushBack(SL* ps, SLDataType x);
void SLPopBack(SL* ps);

// 头插头删
void SLPushFront(SL* ps, SLDataType x);
void SLPopFront(SL* ps);

// 中间插入删除
// 在pos位置插入数据
void SLInsert(SL* ps, int pos, SLDataType x);
// 删除pos位置数据
void SLErase(SL* ps, int pos);

// begin查找x的起始位置
int SLFind(SL* ps, SLDataType x, int begin);