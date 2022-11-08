#include "Stack.h"


void StackInit(ST* ps)
{
	assert(ps);//断言

	ps->a = (STDatatype*)malloc(sizeof(STDatatype) * 4);
	if (ps->a == NULL)
	{
		perror("malloc fail");
		exit(-1);
	}

	ps->top = 0;
	ps->capacity = 4;
}

void StackDestroy(ST* ps)
{
	assert(ps);

	free(ps->a);
	ps->a = NULL;
	ps->capacity = 0;
}

void StackPush(ST* ps, STDatatype x)
{
	assert(ps);

	if (ps->top == ps->capacity)
	{
		STDatatype* tmp = (STDatatype*)realloc(ps->a, ps->capacity * 2 * sizeof(STDatatype));//2倍扩容
		if (ps->a == NULL)
		{
			perror("realloc fail");
			exit(-1);
		}

		ps->a = tmp;
		ps->capacity *= 2;
	}

	ps->a[ps->top] = x;//先放数据再加加
	ps->top++;
}

void StackPop(ST* ps)
{
	assert(ps);
	assert(ps->top > 0);

	ps->top--;
}

STDatatype StackTop(ST* ps)
{
	assert(ps);//防止写错ps = NULL

	return ps->a[ps->top - 1];//防止已经pop完了还在pop
}

bool StackEmpty(ST* ps)
{
	assert(ps);

	return ps->top == 0;
}

int StackSize(ST* ps)
{
	assert(ps);

	return ps->top;
}
