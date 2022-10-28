//
//  main.c
//  min_num
//
//  Created by luozhi on 2022/10/27.
//
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
    int a = 0;
    int b = 0;
    scanf("%d %d", &a, &b);
    if (a < b)
    {
        int tmp = a;
        a = b;
        b = tmp;
    }
    int i = 0;
    for (i = a; (i % a != 0) || (i % b != 0); i++);
    printf("the min_num of %d and %d is %d\n", a, b, i);
    return 0;
}
