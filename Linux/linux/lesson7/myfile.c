#include <stdio.h>

#define PRINT
#define M 100

int main()
{
    printf("hello 107\n");
    printf("hello 107\n");
    printf("hello 107\n");
    printf("hello 107\n");
    printf("hello 107\n");
    printf("hello 107\n");
    printf("hello 107\n");
    printf("hello 107\n");
    printf("hello 107\n");
    printf("hello 107\n");
    printf("hello 107\n");
    printf("hello 107\n");

    printf("hello M: %d\n", M);


    printf("hello 107 start\n");
   // printf("hello 107\n");
   // printf("hello 107\n");
   // printf("hello 107\n");
   // printf("hello 107\n");
   // printf("hello 107\n");
   // printf("hello 107\n");
   // printf("hello 107\n");
   // printf("hello 107\n");
   // printf("hello 107\n");
    printf("hello 107 end\n");

#ifdef PRINT
    printf("hello PRINT\n");
#else
    printf("hello None\n");
#endif

    return 0;
}
