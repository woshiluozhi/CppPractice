#include <stdio.h>

void strcpy(char* str1, const char* str2)
{
	int i = 0;
	while (*(str1++) = *(str2++));
}

int main()
{
	char str1[100] = {0};
	char str2[] = "hello, my name is luozhi!";
	strcpy(str1, str2);
	printf("%s\n", str1);
	return 0;
	
}