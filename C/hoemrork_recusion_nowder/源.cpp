#include <stdio.h>

int sum(int n)
{
    if (n > 1)
    {
        return n + sum(n - 1);
    }
    else
    {
        return 1;
    }
}

int Fibonacci1(int n)
{
    if (n > 2)
    {
        return Fibonacci1(n - 1) + Fibonacci1(n - 2);
    }
    else
    {
        return 1;
    }
}

int Fibonacci2(int n)
{
    int f1 = 1;
    int f2 = 1;
    int fn = 0;
    if (n < 3)
    {
        return 1;
    }
    while (n > 2)
    {
        fn = f2 + f1;
        f1 = f2;
        f2 = fn;
        n--;
    }
    return fn;
}

int main()
{
    printf("%d\n", Fibonacci2(40));
    printf("%d\n", Fibonacci1(40));


    //int n = 0;
    //scanf_s("%d", &n);
    //printf("%d", sum(n));
}