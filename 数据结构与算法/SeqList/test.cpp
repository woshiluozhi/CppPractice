#include "SeqList.h"

void SLtest()
{
	SL sl;
	SLInit(&sl);
	SLPushBack(&sl, 1);
	SLPushBack(&sl, 2);
	SLPushBack(&sl, 3);
	SLPushBack(&sl, 4);
	SLPushBack(&sl, 5);
	SLPushBack(&sl, 6);
	SLPrint(&sl);
	SLPopBack(&sl);
	SLPopBack(&sl);
	SLPushBack(&sl, 10);
	SLPushBack(&sl, 20);
	SLPushFront(&sl, 111);
	//SLPopFront(&sl);
	SLPrint(&sl);
	SLDestroy(&sl);
}

int main()
{
	SLtest();
	return 0;
}