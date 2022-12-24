#define _CRT_SECURE_NO_WARNINGS 1
//#include"SeqList.h"
//
//
//void SLPrint(SL* ps)
//{
//	assert(ps);
//
//	for (int i = 0; i < ps->size; ++i)
//	{
//		printf("%d ", ps->a[i]);
//	}
//	printf("\n");
//}
//
//void SLCheckCapacity(SL* ps)
//{
//	assert(ps);
//
//	if (ps->size == ps->capacity)
//	{
//		int newCapacity = ps->capacity == 0 ? 4 : ps->capacity * 2;
//		SLDataType* tmp = (SLDataType*)realloc(ps->a, newCapacity * sizeof(SLDataType));
//		if (tmp == NULL)
//		{
//			perror("realloc fail");
//			exit(-1);
//		}
//
//		ps->a = tmp;
//		ps->capacity = newCapacity;
//	}
//}
//
//void SLInit(SL* ps)
//{
//	assert(ps);
//
//	ps->a = NULL;
//	ps->size = 0;
//	ps->capacity = 0;
//}
//
//void SLDestroy(SL* ps)
//{
//	assert(ps);
//
//	if (ps->a)
//	{
//		free(ps->a);
//		ps->a = NULL;
//		ps->size = ps->capacity = 0;
//	}
//}
//
//void SLPushBack(SL* ps, SLDataType x)
//{
//	assert(ps);
//
//	if (ps->size == ps->capacity)
//	{
//		int newCapacity = ps->capacity == 0 ? 4 : ps->capacity * 2;
//		SLDataType* tmp = (SLDataType*)realloc(ps->a, newCapacity * sizeof(SLDataType));
//		if (tmp == NULL)
//		{
//			perror("realloc fail");
//			exit(-1);
//		}
//
//		ps->a = tmp;
//		ps->capacity = newCapacity;
//	}
//
//	ps->a[ps->size] = x;
//	ps->size++;
//}
//
//void SLPopBack(SL* ps)
//{
//	assert(ps);
//	assert(ps->size > 0);
//	ps->size--;
//}






//Day 2
#include"SeqList.h"


void SLPrint(SL* ps)
{
	assert(ps);

	for (int i = 0; i < ps->size; ++i)
	{
		printf("%d ", ps->a[i]);
	}
	printf("\n");
}

void SLCheckCapacity(SL* ps)
{
	assert(ps);

	if (ps->size == ps->capacity)
	{
		int newCapacity = ps->capacity == 0 ? 4 : ps->capacity * 2;
		SLDataType* tmp = (SLDataType*)realloc(ps->a, newCapacity * sizeof(SLDataType));
		if (tmp == NULL)
		{
			perror("realloc fail");
			exit(-1);
		}

		ps->a = tmp;
		ps->capacity = newCapacity;
	}
}

void SLInit(SL* ps)
{
	assert(ps);

	ps->a = NULL;
	ps->size = 0;
	ps->capacity = 0;
}

void SLDestroy(SL* ps)
{
	assert(ps);

	//if (ps->a != NULL)
	if (ps->a)
	{
		free(ps->a);
		ps->a = NULL;
		ps->size = ps->capacity = 0;
	}
}


void SLPushBack(SL* ps, SLDataType x)
{
	SLInsert(ps, ps->size, x);
}

void SLPopBack(SL* ps)
{
	SLErase(ps, ps->size - 1);
}


void SLPushFront(SL* ps, SLDataType x)
{
	SLInsert(ps, 0, x);
}

void SLPopFront(SL* ps)
{
	SLErase(ps, 0);
}

// 在pos位置插入数据
void SLInsert(SL* ps, int pos, SLDataType x)
{
	assert(ps);
	assert(pos >= 0);
	assert(pos <= ps->size);

	SLCheckCapacity(ps);
	int end = ps->size - 1;
	while (end >= pos)
	{
		ps->a[end + 1] = ps->a[end];
		end--;
	}

	ps->a[pos] = x;
	ps->size++;
}

// 删除pos位置数据
void SLErase(SL* ps, int pos)
{
	assert(ps);
	assert(pos >= 0);
	assert(pos < ps->size);
	//assert(ps->size > 0);

	// 挪动数据覆盖
	int begin = pos + 1;
	while (begin < ps->size)
	{
		ps->a[begin - 1] = ps->a[begin];
		begin++;
	}

	ps->size--;
}

//int SLFind(SL* ps, SLDataType x)
//{
//	assert(ps);
//
//	for (int i = 0; i < ps->size; ++i)
//	{
//		if (ps->a[i] == x)
//		{
//			return i;
//		}
//	}
//
//	return -1;
//}

int SLFind(SL* ps, SLDataType x, int begin)
{
	assert(ps);

	for (int i = begin; i < ps->size; ++i)
	{
		if (ps->a[i] == x)
		{
			return i;
		}
	}

	return -1;
}


int removeElement(int* nums, int numsSize, int val)
{
	int left = 0;
	for (int right = 0; right < numsSize; right++)
	{
		if (nums[right] != val)
		{
			nums[left] = nums[right];
			left++;
		}
	}
	return left;
}


int removeDuplicates(int* nums, int numsSize) {
	int fast = 1;
	int slow = 1;
	while (fast < numsSize)
	{
		if (nums[fast] != nums[fast - 1])
		{
			nums[slow] = nums[fast];
			slow++;
		}
		fast++;
	}
	return slow;
}






void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n) {
	int p1 = m - 1;
	int p2 = n - 1;
	int cur = m + n - 1;
	while (p1 >= 0 || p2 >= 0)
	{
		if (p1 == -1)
		{
			nums1[cur--] = nums2[p2--];
		}
		else if (p2 == -1)
		{
			nums1[cur--] = nums1[p1--];
		}
		else if (nums1[p1] > nums2[p2])
		{
			nums1[cur--] = nums1[p1--];
		}
		else
		{
			nums1[cur--] = nums2[p2--];
		}
	}
}