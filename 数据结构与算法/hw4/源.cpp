//#define _CRT_SECURE_NO_WARNINGS 1
//#define Mul(x,y) ++x*++y
////#include <stdio.h>
////#include <stdlib.h>
////typedef struct List_t
////{
////	struct List_t* next;
////	struct List_t* prev;
////	char data[0];
////}list_t;
////
////void fut(int** s, int p[2][3])
////{
////	**s = p[1][1];
////}
////int main()
////{
////	int a[2][3] = { 1,3,5,7,9,11 }, * p;
////	p = (int*)malloc(sizeof(int));
////	fut(&p, a);
////	printf("%d", *p);
////	//printf("%d", sizeof(list_t));
////	return 0;
////}
////
////
////#include <stdio.h>
////
////int main() {
////    int a;
////    while (scanf("%d", &a) != EOF) { // 注意 while 处理多个 case
////        // 64 位输出请用 printf("%lld") to 
////        int cnt = 0;
////        int tmp = 0;
////        for (int i = 7; i <= a; i++)
////        {
////            if (i % 7 == 0)
////                cnt++;
////            else
////            {
////                tmp = i;
////                while (tmp > 0)
////                {
////                    if (tmp % 10 == 7)
////                    {
////                        cnt++;
////                        break;
////                    }
////                    else
////                    {
////                        tmp /= 10;
////                    }
////                }
////            }
////        }
////        printf("%d", cnt);
////    }
////    return 0;
////}
//
//
//#include<stdio.h>
//void fun(char* fname, char* st)
//{
//	FTLE* myf;
//	int i;
//	myf = fopen(fname, "w");
//	for (i = 0; i < strlen(st); i++) fputc(st[i], myf);
//	fclose(myf);
//}
//int main()
//{
//	fun("test.txt", "new world");
//	fun("test.txt", "hello,");
//	return 0;
//}
//
//
//int trailingZeroes(int n) {
//	int ans = 0;
//	while (n)
//	{
//		n /= 5;
//		ans += n;
//	}
//	return ans;
//}
//
//
//int main()
//{
//	int a = 1;
//	int b = 2;
//	int c = 3;
//	printf("%d", Mul(a + b, b + c));
//	return 0;
//}
//
////int main() {
////	float a;
////	while (scanf("%f", &a) != EOF) { // 注意 while 处理多个 case
////		// 64 位输出请用 printf("%lld") to 
////		printf("%d\n", (int)(a + 0.5));
////	}
////	return 0;
////}

#include <stdio.h>
#define a 10
void foo();
int main()
{
	printf("%d..", a);
	foo();
	printf("%d", a);
	return 0;
}
void foo() {
#undef a
#define a 50
}


#include <stdio.h>
//#include <string.h>

int main() {
    char str[1000];
    while (gets(str) != NULL) { // 注意 while 处理多个 case
        // 64 位输出请用 printf("%lld") to 
        int k = 0;
        int s = 0;
        int n = 0;
        int o = 0;
        for (int i = 0; i < strlen(str); i++)
        {
            if (str[i] >= '0' && str[i] <= '9')
                n++;
            else if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
                k++;
            else if (str[i] == ' ')
                s++;
            else
                o++;
        }
        printf("%d\n%d\n%d\n%d\n", k, s, n, o);
    }
    return 0;
}


/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* runningSum(int* nums, int numsSize, int* returnSize) {
    *returnSize = numsSize;
    for (int i = 1; i < numsSize; i++)
    {
        nums[i] += nums[i - 1];
    }
    return nums;

}


int searchInsert(int* nums, int numsSize, int target) {
    int left = 0, right = numsSize - 1, ans = numsSize;

    while (left <= right)
    {
        int mid = ((right - left) >> 1) + left;
        if (target <= nums[mid])
        {
            ans = mid;
            right = mid - 1;
        }
        else
        {
            left = mid + 1;
        }
    }
    return ans;
}