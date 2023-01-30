//
//  SList.h
//  SingleList
//
//  Created by 罗智 on 2023/1/29.
//

#ifndef SList_h
#define SList_h

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

typedef int SLTDataType;

typedef struct SListNode
{
    SLTDataType data;
    struct SListNode* next;
}SLTNode;

SLTNode* BuySLTNode(SLTDataType x);
SLTNode* CreateSlist(int n);

void SLTPrint(SLTNode* phead);

void SLTPushBack(SLTNode** pphead, SLTDataType x);
void SLTPopBack(SLTNode** phead);
void SLTPushFront(SLTNode** pphead, SLTDataType x);
void SLTPopFront(SLTNode** pphead);

SLTNode* SLTFind(SLTNode* phead, SLTDataType x)
{
    SLTNode* cur = phead;
    while(cur)
    {
        if(cur->data == x)
        {
            return cur;
        }
        cur = cur->next;
    }
    return NULL;
}







#endif /* SList_h */
