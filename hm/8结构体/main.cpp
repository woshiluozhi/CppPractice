#include <iostream>
using namespace std;


//struct student
//{
//	string name;
//	int age;
//	int score;
//}stu3;//�ṹ�崴����ʽ3
//
//int main()
//{
//	student stu1;
//	stu1.name = "����";
//	stu1.age = 18;
//	stu1.score = 100;
//	cout << "������" << stu1.name << " ���䣺"
//		<< stu1.age << " ������" << stu1.score
//		<< endl;
//
//	student stu2 = { "����",19,60 };
//	cout << "������" << stu2.name << " ���䣺"
//		<< stu2.age << " ������" << stu2.score
//		<< endl;
//
//	stu3.name = "����";
//	stu3.age = 18;
//	stu3.score = 80;
//	cout << "������" << stu3.name << " ���䣺"
//		<< stu3.age << " ������" << stu3.score
//		<< endl;
//
//
//	return 0;
//}

//�ṹ������
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
////ֵ����
//void printStudent(student stu)
//{
//	stu.age = 28;
//	cout << "�Ӻ�����������" << stu.name << "���䣺" << stu.age
//		<< "������" << stu.score << endl;
//}
//
////��ַ����
//void printStudent2(const student* stu)
//{
////	stu->age = 28;
//	cout << "�Ӻ�����������" << stu->name << "���䣺" << stu->age
//		<< "������" << stu->score << endl;
//}
//
//int main()
//{
	//student arr[3] =
	//{
	//	{"����", 18, 80},
	//	{"����", 19, 70},
	//	{"����", 20, 60},
	//};

	//for (int i = 0; i < 3; i++)
	//{
	//	cout << "������" << arr[i].name << " ���䣺"
	//		<< arr[i].age << " ������" << arr[i].score << endl;
	//}

	//�ṹ��ָ��
	//student stu = { "����",18,99 };

	//student* p = &stu;
	//cout << "������" << p->name << " ���䣺"
	//	<< p->age << " ������" << p->score << endl;
	//p->score = 88;
	//cout << "������" << p->name << " ���䣺"
	//	<< p->age << " ������" << p->score << endl;

	/*teacher t1;
	t1.id = 999;
	t1.name = "����";
	t1.age = 40;

	t1.stu.name = "����";
	t1.stu.age = 18;
	t1.stu.score = 100;

    cout << " ��ְ����ţ�" << t1.id << " ������" << t1.name
		 << " ���䣺" << t1.age << endl;
	cout << " ������" << t1.stu.name
		 << " ���䣺" << t1.stu.age << " ������" << t1.stu.score << endl;*/

//	student stu = { "����",18,90 };
//	printStudent(stu);
//	cout << "�������� ������" << stu.name << " ���䣺 " << stu.age << " ������" << stu.score << endl;
//
//	printStudent2(&stu);
//	cout << "�������� ������" << stu.name << " ���䣺 " << stu.age << " ������" << stu.score << endl;
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
//	string tName = "��ʦ";
//	string sName = "ѧ��";
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
//			cout << "ѧ��������" << tArray[i].sArray[j].name
//				<< " ѧ��������" << tArray[i].sArray[j].score
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
		{"����",23,"��"},
		{"����",22,"��"},
		{"�ŷ�",20,"��"},
		{"����",21,"��"},
		{"����",19,"Ů"}
	};
	int len = sizeof(HeroArray) / sizeof(HeroArray[0]);

	BubbleSort(HeroArray, len);
	PrintHero(HeroArray, len);


	return 0;
}

