#include <stdio.h>

struct Stu
{
	char name[20];
	int age;
	char sex[5];
	char id[15];
};

int main()
{
	struct Stu u = { "zhangsan", 20, "male", "20180101" };

	printf("name = %s age = %d sex = %s id = %s\n", u.name, u.age, u.sex, u.id);
	struct Stu* ps = &u;
	printf("name = %s age = %d sex = %s id = %s\n", ps->name, ps->age, ps->sex, ps->id);
	//printf("%zu", sizeof(int*));
	//printf("%s", u.name[1]);
	int hw = printf("aaaaaaaaa");
	printf("\n%d", hw);
		return 0;
}