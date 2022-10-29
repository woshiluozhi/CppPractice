#include <stdio.h>

size_t my_strlen(const char* str)
{
	//int count = 0;
	//while (str[count] != '\0')///////////////////
	//{
	//	count++;
	//}
	const char* count = str;
	//char* count = str;
	while (*count++);
	return count - str - 1;
}

int main()
{
	char str[] = "hello";//, my name is luozhi!";
	printf("%d\n", (int)my_strlen(str));
	return 0;

}