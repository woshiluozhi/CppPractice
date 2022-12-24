#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>

void func(char para[100]);
void func1(char* p);
int main()
{
	//char a = 101;
	//int sum = 200;
	//a += 27;
	//sum += a;
	//printf("%d\n", sum);

	//int value = 1024;
	//char condition = *((char*)(&value));
	//if (condition)
	//	value += 1;
	//condition = *((char*)(&value));
	//if (condition)
	//	value += 1;
	//condition = *((char*)(&value));
	//if (condition)
	//	value += 1;
	//condition = *((char*)(&value));
	//if (condition)
	//	value += 1;
	//condition = *((char*)(&value));
	//printf("%d %d", value, condition);
	
	//char* para[100] = { 0 };
	//func(para[100]);

	char s[] = { '1', '2', '3', '4' };
	func1(s);
	printf("%c", *(s + 0));

	return 0;
}
void func(char para[100])
{
	void* p = malloc(100);
	printf("%d, %d\n", sizeof(para), sizeof(p));
}
void func1(char* p)
{
	p = p + 1;
}





#include <stdio.h>

int main() {
	int getNum = 0;

	while (scanf("%d", &getNum) != EOF)
	{
		int cnt = 0;
		int square = 0;
		for (int i = 0; i <= getNum; i++)
		{
			square = i * i;
			if (square % 10000 == i || square % 1000 == i || square % 100 == i || square % 10 == i)
				cnt++;
		}
		printf("%d", cnt);

	}

	return 0;

}



#include <stdio.h>
//#inlcude <math.h>
int main() {
	int a;
	while (scanf("%d", &a) != EOF) { // 注意 while 处理多个 case
		// 64 位输出请用 printf("%lld") to 
		//int num = sqrt(a);
		int cnt = 1;
		int flag = 1;
		for (int i = 3; i < a; i++)
		{
			for (int j = 2; j < i; j++)
			{
				if (i % j == 0)
				{
					flag = 0;
					break;
				}

			}
			cnt += flag;
			flag = 1;
		}




		printf("%d\n", cnt);
	}
	return 0;
}