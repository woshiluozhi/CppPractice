#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <assert.h>
typedef int STDatatype;
typedef struct Stack
{
	STDatatype* a;
	int capacity;
	int top;
}ST;

void StackInit(ST* ps);
void StackDestroy(ST* ps);
void StackPush(ST* ps, STDatatype);
void StackPop(ST* ps);
STDatatype StackTop(ST* ps);

bool StackEmpty(ST* ps);
int StackSize(ST* ps);
