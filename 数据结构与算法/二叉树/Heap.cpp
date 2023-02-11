#include "Heap.h"
void HeapPrint(HP* php)
{
	assert(php);
	for (int i = 0; i < php->size; ++i)
	{
		printf("%d ", php->a[i]);
	}
	printf("\n");
}
void HeapInit(HP* php)
{
	assert(php);
	php->a = NULL;
	php->size = php->capacity = 0;
}
void HeapDestroy(HP* php)
{
	assert(php);
	free(php->a);
	php->a = NULL;
	php->size = php->capacity = 0;
}
HPDataType HeapTop(HP* php)
{
	assert(php);
	assert(php->size > 0);

	return php->a[0];
}
int HeapSize(HP* php)
{
	assert(php);

	return php->size;
}
bool HeapEmpty(HP* php)
{
	assert(php);

	return php->size == 0;
}
void Swap(HPDataType* p1, HPDataType* p2)
{
	HPDataType tmp = *p1;
	*p1 = *p2;
	*p2 = tmp;
}
//插入最后的节点前检查扩容,并向上比较
void HeapPush(HP* php, HPDataType x)
{
	assert(php);
	//扩容
	if (php->size == php->capacity)
	{
		int newCapacity = php->capacity == 0 ? 4 : php->capacity * 2;
		HPDataType* tmp = (HPDataType*)realloc(php->a, sizeof(HPDataType) * newCapacity);
		if (tmp == NULL)
		{
			perror("realloc failed!\n");
			exit(-1);
		}
		php->a = tmp;
		php->capacity = newCapacity;
	}
	php->a[php->size] = x;
	php->size++;
	//向上比较
	AdjustUp(php->a, php->size - 1);
}
void HeapPop(HP* php)
{
	assert(php);
	assert(php->size > 0);
	//交换根与最后一个叶子
	Swap(&php->a[0], &php->a[php->size - 1]);
	//删除叶子
	php->size--;
	//根向下比较
	AdjustDown(php->a, php->size, 0);
}

void HeapCreate(HP* php, HPDataType* a, int n)
{

	assert(php);
	php->a = (HPDataType*)realloc(php->a, sizeof(HPDataType) * n);
	if (php->a == NULL)
	{
		perror("realloc fail");
		exit(-1);
	}
	memcpy(php->a, a, sizeof(HPDataType) * n);
	php->size = php->capacity = n;

	// 建堆算法
	for (int parent = (n - 1 - 1) / 2; parent >= 0; --parent)
	{
		AdjustDown(a, n, parent);
	}
}

//向上比较
void AdjustUp(HPDataType* a, int child)
{
	int parent = (child - 1) / 2;
	//while (parent >= 0)  不好
	while (child > 0)
	{
		if (a[child] < a[parent])
		{
			Swap(&a[child], &a[parent]);
			child = parent;
			parent = (child - 1) / 2;
		}
		else
		{
			//跳出while
			break;
		}
	}
}

void AdjustDown(HPDataType* a, int n, int parent)
{
	int child = parent * 2 + 1;
	while (child < n)
	{
		// 确认child指向大的那个孩子
		if (child + 1 < n && a[child + 1] < a[child])
		{
			++child;
		}

		// 1、孩子大于父亲，交换，继续向下调整
		// 2、孩子小于父亲，则调整结束
		if (a[child] < a[parent])
		{
			Swap(&a[child], &a[parent]);
			parent = child;
			child = parent * 2 + 1;
		}
		else
		{
			break;
		}
	}
}


