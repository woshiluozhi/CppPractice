//
//  SList.c
//  SingleList
//
//  Created by 罗智 on 2023/1/29.
//

#include "SList.h"

SLTNode* BuySLTNode(SLTDataType x)
{
    SLTNode* newnode = (SLTNode*)malloc(sizeof(SLTNode));
    if(newnode == NULL)
    {
        printf("malloc fail");
        exit(-1);
    }
    newnode->data = x;
    newnode->next = NULL;
    return newnode;
}

SLTNode* CreateSlist(int n)
{
    SLTNode* phead = NULL, * ptail = NULL;
    //int x = 0;
    for (int i = 0; i < n; i++)
    {
        SLTNode* newnode = BuySLTNode(i);
        if(phead == NULL)
        {
            ptail = phead = newnode;
        }
        else
        {
            ptail->next = newnode;
            ptail = newnode;
            
        }
        
    }
    return phead;
}

void SLTPrint(SLTNode* phead)
{
    SLTNode* cur = phead;
    while (cur != NULL)
    {
        printf("%d (%p) ->", cur->data, cur->next);
        cur = cur->next;
        
    }
    printf("NULL\n");
}

void SLTPushBack(SLTNode** pphead, SLTDataType x)
{
    SLTNode* newnode = BuySLTNode(x);
    if(*pphead == NULL)
    {
        *pphead = newnode;
    }
    else
    {
        SLTNode* tail = *pphead;
        while (tail->next)
        {
            tail = tail->next;
        }
        tail->next = newnode;
    }
}

void SLTPopBack(SLTNode** pphead)
{
    assert(*pphead);
    if((*pphead)->next == NULL)
    {
        free(*pphead);
        *pphead = NULL;
    }
    else
    {
        SLTNode* tail = *pphead;
        while(tail->next->next)
        {
            tail = tail->next;
        }
        free(tail->next);
        tail->next = NULL;
    }
}

void SLTPushFront(SLTNode** pphead, SLTDataType x)
{
    SLTNode* newnode = BuySLTNode(x);
    newnode->next = *pphead;
    *pphead = newnode;
}

void SLTPopFront(SLTNode** pphead)
{
    assert(*pphead);
    
    SLTNode* next = (*pphead)->next;
    free(*pphead);
    *pphead = next;
}
