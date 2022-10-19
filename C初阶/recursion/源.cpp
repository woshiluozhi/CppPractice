#include <stdio.h>

void print(unsigned int n)
{
	if (n > 9)//limit condition
	{
		print(n / 10);//approach condition
	}
	printf("%d ", n % 10);
}

int main()
{
	//printf("hello\n");
	//main();
	print(1234);
	return 0;
}