#include "Stack.h"

void TestStack1()
{
	ST st;
	StackInit(&st);
	StackPush(&st, 1);
	StackPush(&st, 2);
	StackPush(&st, 3);
	StackPush(&st, 4);
	StackPush(&st, 5);
	StackPush(&st, 6);

	printf("%d\n", StackSize(&st));
	printf("%d\n", st.top);


	StackPop(&st);
	StackPop(&st);
	StackPop(&st);
	StackPop(&st);
	StackPop(&st);
	StackPop(&st);
	//StackPop(&st);

	printf("%d\n", StackTop(&st));
}

int main()
{
	TestStack1();
	return 0;
}