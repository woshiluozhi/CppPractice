//
//  Stack.c
//  Stack
//
//  Created by 罗智 on 2023/1/30.
//

#include "Stack.h"

void StackInit(ST* ps)
{
    assert(ps);
    ps->a = (STDataType*)malloc(sizeof(STDataType) * 4);
    if(ps->a == NULL)
    {
        perror("malloc fialed");
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

void StackPush(ST* ps, STDataType x)
{
    assert(ps);
    if(ps->top == ps->capacity)
    {
        STDataType* tmp = (STDataType*)realloc(ps->a, ps->capacity * 2 * sizeof(STDataType));
        if(ps->a == NULL)
        {
            perror("realloc failed");
            exit(-1);
        }
        ps->a = tmp;
        ps->capacity = 2 * ps->capacity;
    }
    ps->a[ps->top] = x;
    ps->top++;
}

void StackPop(ST* ps)
{
    assert(ps);
    assert(ps->top > 0);
    ps->top--;
}
STDataType StackTop(ST* ps)
{
    assert(ps);
    return ps->a[ps->top - 1];
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
