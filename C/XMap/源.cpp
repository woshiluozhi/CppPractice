#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>


#include <stdio.h>


int main()
{
    int n = 0;
    while (~scanf("%d", &n))
    {
        int left = 0;
        int right = n - 1;

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (j == i || j + i == n - 1)
                    printf("*");
                else
                    printf(" ");
            }
            printf("\n");
        }
    }



    return 0;
}