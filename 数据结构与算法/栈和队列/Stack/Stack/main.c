//
//  main.c
//  Stack
//
//  Created by 罗智 on 2023/1/30.
//

#include "Stack.h"

void TestStack1(void)
{
    ST st;
    StackInit(&st);
    StackPush(&st, 1);
    StackPush(&st, 2);
    StackPush(&st, 3);
    StackPush(&st, 4);
    StackPush(&st, 5);
    printf("%d\n", StackSize(&st));
    printf("%d\n", StackTop(&st));
    printf("%d\n", st.top);
    
    StackPop(&st);
    StackPop(&st);
    //StackPop(&st);
    //StackPop(&st);
    //StackPop(&st);
    printf("%d\n", StackSize(&st));
    printf("%d\n", StackTop(&st));
    printf("%d\n", st.top);
    
    
}

int main(int argc, const char * argv[]) {
    // insert code here...
    //printf("Hello, World!\n");
    TestStack1();
    return 0;
}
