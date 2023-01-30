//
//  main.c
//  SingleList
//
//  Created by 罗智 on 2023/1/29.
//

#include "SList.h"

void TestSList10(void)
{
    SLTNode* plist = CreateSlist(10);
    SLTPrint(plist);
}

void TestSList3(void)
{
    SLTNode* plist = NULL;
    SLTPushBack(&plist, 100);
    SLTPushBack(&plist, 200);
    SLTPushBack(&plist, 300);
    SLTPrint(plist);
    
    SLTPopBack(&plist);
    SLTPrint(plist);
    
    SLTPopBack(&plist);
    SLTPrint(plist);
    
    SLTPopBack(&plist);
    SLTPrint(plist);
    
    SLTPopBack(&plist);
    SLTPrint(plist);
}

void TestSList4(void)
{
    SLTNode* plist = NULL;
    SLTPushFront(&plist, 100);
    SLTPushFront(&plist, 200);
    SLTPushFront(&plist, 300);
    SLTPushFront(&plist, 400);
    
    SLTPrint(plist);
    
    SLTPopFront(&plist);
    SLTPrint(plist);
    SLTPopFront(&plist);
    SLTPrint(plist);
    SLTPopFront(&plist);
    SLTPrint(plist);
    SLTPopFront(&plist);
    SLTPrint(plist);
}

void TestSList5(void)
{
    SLTNode* plist = NULL;
    SLTPushBack(&plist, 1);
    SLTPushBack(&plist, 2);
    SLTPushBack(&plist, 3);
    SLTPushBack(&plist, 4);
    SLTPushBack(&plist, 5);
    SLTPrint(plist);
    SLTNode* pos = SLTFind(plist, 4);
    if(pos)
    {
        printf("we found it, which is in %p\n", pos);
    }
    else
    {
        printf("we dont find it\n");
    }
}

int main(int argc, const char * argv[])
{
    // insert code here...
    //printf("Hello, World!\n");
    //TestSList5();
    TestSList4();
    return 0;
}


