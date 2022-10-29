#include <stdio.h>

int main()
{
    int n = 0;
    scanf("%d", &n);
    int arr[13][13] = { 0 };
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            if (arr[i][j] != 0)
            {
                printf("NO\n");
                return 0;
            }
        }
    }
    printf("YES\n");

    #include <stdio.h>

int main()
{
    int n = 0;
    //int sum = 0;
    int i = 0;
    int arr[40] = {0};
    scanf("%d", &n);
    while (n)
    {
        arr[i++] = n % 6;
        n /= 6;  
    }
    for (i--; i >= 0; i--)
    {
        printf("%d",arr[i]);
    }
}

    return 0;

}

//#include <stdio.h>
//
//int main()
//{
//    int n = 0;
//    //int sum = 0;
//    int i = 0;
//    int arr[40] = { 0 };
//    scanf("%d", &n);
//    while (n)
//    {
//        arr[i++] = n % 6;
//        n /= 6;
//    }
//    for (i--; i >= 0; i--)
//    {
//        printf("%d", arr[i]);
//    }
//}

//#include <stdio.h>
//
//long long aa(int m, int n)
//{
//    if (m < n)
//    {
//        long long a = m;
//        m = n;
//        n = a;
//    }
//    long long tmp = 0;
//    while (n > 0)
//    {
//        tmp = m % n;
//        m = n;
//        n = tmp;
//    }
//    return m;
//}
//
//int main()
//{
//    long long m = 0;
//    long long n = 0;
//    scanf("%lld %lld", &m, &n);
//    long long a1 = aa(m, n);
//    printf("%lld", a1 + (m / a1) * (n / a1) * a1);
//
//
//    return 0;
//}


//#include <stdio.h>
//
//int step(int n)
//{
//    if (n < 3)
//        return n;
//    return step(n - 1) + step(n - 2);
//}
//
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    printf("%d", step(n));
//    return 0;
//}