//
//  Stack.h
//  Stack
//
//  Created by 罗智 on 2023/1/30.
//

#ifndef Stack_h
#define Stack_h

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <assert.h>
typedef int STDataType;
typedef struct Stack
{
    STDataType* a;
    int capacity;
    int top;
}ST;

void StackInit(ST* ps);
void StackDestroy(ST* ps);
void StackPush(ST* ps, STDataType x);
void StackPop(ST* ps);
STDataType StackTop(ST* ps);
bool StackEmpty(ST* ps);
int StackSize(ST* ps);




#endif /* Stack_h */
