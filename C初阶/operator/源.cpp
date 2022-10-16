//#include <stdio.h>
//
//int main()
//{
//	int a = 10;
//	int b = a++;
//	int c = ++a;
//	int d = a++;
//	printf("%d %d %d %d", b, c, d, a);
//	int aa = (int)3.64;
//	printf(" %d\n", aa);
//	//char ch[10] = "hello bit";
//	//printf("%s", ch[10]);
//	//int n = 10; int arr[n] = { 0 };
//	int x = 0;
//	int y = 0;
//	scanf_s("%d %d", &x, &y);
//	printf("%d", x > y ? x : y);
//
//	int arr[4] = { 1,2,3,4 };
//	printf("%d %d", arr[3], 3[arr]);
//	return 0;
//
//
//}
#include <stdio.h>

int main()
{
    int a, b;
    while (scanf_s("%d%d", &a, &b) != EOF) {


        //scanf("%d%d",&a,&b);
        if (a > b)
        {
            printf("%d>%d\n", a, b);
        }
        else if (a == b)
        {
            printf("%d=%d\n", a, b);
        }
        else
        {
            printf("%d<%d\n", a, b);
        }
    }

    return 0;
}