#include <stdio.h>
#include <unistd.h>

int main()
{
    int i = 10;
    for(; i >= 0; i--)
    {
        printf("%2d\r", i);
        fflush(stdout);
        sleep(1);
    }
    printf("\n");
   // printf("hello bit"); // 好像是先执行了sleep,在执行printf？并不是！！一定是先执行完printf，在执行的sleep
   // sleep(3);            // hello bit, 没有被刷新，数据一定是在sleep期间被保存起来啦，为什么\n,数据就显示出来了呢？缓冲区有自己的刷新策略: 行缓冲
   // printf("hello bit\r");
    //fflush(stdout);
   // sleep(3);
    return 0;
}
