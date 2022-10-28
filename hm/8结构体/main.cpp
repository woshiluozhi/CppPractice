#include <iostream>
using namespace std;


//struct student
//{
//	string name;
//	int age;
//	int score;
//}stu3;//结构体创建方式3
//
//int main()
//{
//	student stu1;
//	stu1.name = "张三";
//	stu1.age = 18;
//	stu1.score = 100;
//	cout << "姓名：" << stu1.name << " 年龄："
//		<< stu1.age << " 分数：" << stu1.score
//		<< endl;
//
//	student stu2 = { "李四",19,60 };
//	cout << "姓名：" << stu2.name << " 年龄："
//		<< stu2.age << " 分数：" << stu2.score
//		<< endl;
//
//	stu3.name = "王五";
//	stu3.age = 18;
//	stu3.score = 80;
//	cout << "姓名：" << stu3.name << " 年龄："
//		<< stu3.age << " 分数：" << stu3.score
//		<< endl;
//
//
//	return 0;
//}

//结构体数组
//struct student
//{
//	string name;
//	int age;
//	int score;
//};
//
//struct teacher
//{
//	int id;
//	string name;
//	int age;
//	student stu;
//};
//
////值传递
//void printStudent(student stu)
//{
//	stu.age = 28;
//	cout << "子函数中姓名：" << stu.name << "年龄：" << stu.age
//		<< "分数：" << stu.score << endl;
//}
//
////地址传递
//void printStudent2(const student* stu)
//{
////	stu->age = 28;
//	cout << "子函数中姓名：" << stu->name << "年龄：" << stu->age
//		<< "分数：" << stu->score << endl;
//}
//
//int main()
//{
	//student arr[3] =
	//{
	//	{"张三", 18, 80},
	//	{"李四", 19, 70},
	//	{"王五", 20, 60},
	//};

	//for (int i = 0; i < 3; i++)
	//{
	//	cout << "姓名：" << arr[i].name << " 年龄："
	//		<< arr[i].age << " 分数：" << arr[i].score << endl;
	//}

	//结构体指针
	//student stu = { "张三",18,99 };

	//student* p = &stu;
	//cout << "姓名：" << p->name << " 年龄："
	//	<< p->age << " 分数：" << p->score << endl;
	//p->score = 88;
	//cout << "姓名：" << p->name << " 年龄："
	//	<< p->age << " 分数：" << p->score << endl;

	/*teacher t1;
	t1.id = 999;
	t1.name = "老王";
	t1.age = 40;

	t1.stu.name = "张三";
	t1.stu.age = 18;
	t1.stu.score = 100;

    cout << " 教职工编号：" << t1.id << " 姓名：" << t1.name
		 << " 年龄：" << t1.age << endl;
	cout << " 姓名：" << t1.stu.name
		 << " 年龄：" << t1.stu.age << " 分数：" << t1.stu.score << endl;*/

//	student stu = { "张三",18,90 };
//	printStudent(stu);
//	cout << "主函数中 姓名：" << stu.name << " 年龄： " << stu.age << " 分数：" << stu.score << endl;
//
//	printStudent2(&stu);
//	cout << "主函数中 姓名：" << stu.name << " 年龄： " << stu.age << " 分数：" << stu.score << endl;
//
//	return 0;
//}
#include <ctime>

//struct Student
//{
//	string name;
//	int score;
//};
//
//struct Teacher
//{
//	string name;
//	Student sArray[5];
//};
//
//void allocateSpace(Teacher tArray[], int len)
//{
//	string tName = "教师";
//	string sName = "学生";
//	string NameSeed = "ABCDEF";
//	for (int i = 0; i < len; i++)
//	{
//		tArray[i].name = tName + NameSeed[i];
//		for (int j = 0; j < 5; j++)
//		{
//			tArray[i].sArray[j].name = sName + NameSeed[j];
//			tArray[i].sArray[j].score = rand() % 61 + 40;
//		}
//	}
//}
//
//void PrintTeacher(Teacher tArray[], int len)
//{
//	for (int i = 0; i < len; i++)
//	{
//		cout << tArray[i].name << endl;
//		for (int j = 0; j < 5; j++)
//		{
//			cout << "学生姓名：" << tArray[i].sArray[j].name
//				<< " 学生分数：" << tArray[i].sArray[j].score
//				<< endl;
//		}
//	}
//}
//
//int main()
//{
//	srand((unsigned int)time(NULL));
//	Teacher tArry3[7];
//	int len3 = sizeof(tArry3) / sizeof(tArry3[0]);
//	allocateSpace(tArry3, len3);
//	PrintTeacher(tArry3, len3);
//
//	return 0;
//}

struct Hero
{
	string name;
	int age;
	string sex;
};

//void BubbleSort(Hero* HeroArray[], int len)
//{
//	for (int i = 0; i < len - 1; i++)
//	{
//		for (int j = 0; j < len - 1 - i; j++)
//		{
//			if (HeroArray[j]->age > HeroArray[j + 1]->age)
//			{
//				int temp = HeroArray[j]->age;
//				HeroArray[j]->age = HeroArray[j +1]->age;
//				HeroArray[j + 1]->age = temp;
//			}
//		}
//	}
//}

void BubbleSort(Hero HeroArray[], int len)
{
	for (int i = 0; i < len - 1; i++)
	{
		for (int j = 0; j < len - 1 - i; j++)
		{
			if (HeroArray[j].age > HeroArray[j + 1].age)
			{
				int temp = HeroArray[j].age;
				HeroArray[j].age = HeroArray[j + 1].age;
				HeroArray[j + 1].age = temp;
			}
		}
	}
}

void PrintHero(Hero HeroArray[], int len)
{
	for (int i = 0; i < len; i++)
	{
		cout << HeroArray[i].name << "," << HeroArray[i].age
			<< "," << HeroArray[i].sex << endl;
	}
}

int main()
{
	Hero HeroArray[5] =
	{
		{"刘备",23,"男"},
		{"关羽",22,"男"},
		{"张飞",20,"男"},
		{"赵云",21,"男"},
		{"貂蝉",19,"女"}
	};
	int len = sizeof(HeroArray) / sizeof(HeroArray[0]);

	BubbleSort(HeroArray, len);
	PrintHero(HeroArray, len);


	return 0;
}

