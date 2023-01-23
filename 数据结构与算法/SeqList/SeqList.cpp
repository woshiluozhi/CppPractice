#include "SeqList.h"
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

    if (ps->a)
    {
        free(ps->a);
        ps->a = NULL;
        ps->size = 0;
        ps->capacity = 0;
    }
}

void SLPrint(SL* ps)
{
    assert(ps);

    for (int i = 0; i < ps->size; i++)
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
            printf("realloc fail!\n");
            exit(-1);
        }
        ps->a = tmp;
        ps->capacity = newCapacity;
    }
}

void SLPushBack(SL* ps, SLDataType x)
{
    assert(ps);

    SLCheckCapacity(ps);
    ps->a[ps->size] = x;
    ps->size++;
}

void SLPopBack(SL* ps)
{
    assert(ps);
    assert(ps->size > 0);
    ps->size--;
}

void SLPushFront(SL* ps, SLDataType x)
{
    assert(ps);
    SLCheckCapacity(ps);

    int end = ps->size - 1;
    while (end >= 0)
    {
        ps->a[end + 1] = ps->a[end];
        end--;
    }
    ps->a[0] = x;
    ps->size++;
}

void SLPopFront(SL* ps)
{
    assert(ps);
    assert(ps->size > 0);
    int begin = 1;
    while (begin < ps->size)
    {
        ps->a[begin - 1] = ps->a[begin];
        begin++;
    }
    ps->size--;
}


void SLInsert(SL* ps, int pos, SLDataType x)
{
    assert(ps);
    assert(pos >= 0);
    assert(pos <= ps->size);//判断pos在数组中

    SLCheckCapacity(ps);//是否扩容
    int end = ps->size - 1;
    while (end >= pos)
    {
        ps->a[end + 1] = ps->a[end];
        end--;
    }

    ps->a[pos] = x;
    ps->size++;
}


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
