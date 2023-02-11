#pragma once
#include<stdio.h>
#include<assert.h>
#include<stdlib.h>
#include<stdbool.h>
#include <string.h>


typedef int HPDataType;
typedef struct Heap
{
	HPDataType* a;
	int size;
	int capacity;
}HP;


void HeapCreate(HP* hp, HPDataType* a, int n);

void HeapPrint(HP* php);
void HeapInit(HP* php);
void HeapDestroy(HP* php);
void HeapPush(HP* php, HPDataType x);
void HeapPop(HP* php);
HPDataType HeapTop(HP* php);
int HeapSize(HP* hp);
bool HeapEmpty(HP* hp);
void Swap(HPDataType* p1, HPDataType* p2);
void AdjustUp(HPDataType* a, int child);
void AdjustDown(HPDataType* a, int n, int parent);