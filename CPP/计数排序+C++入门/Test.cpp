// C++����c�﷨
//#include<stdio.h>
//
//int main()
//{
//	printf("hello world\n");
//
//	return 0;
//}

// 16:23����
//#include <iostream>
////using namespace std;
//
//int main()
//{
//	std::cout << "hello world" << std::endl;
//
//	//printf("hello world\n");
//
//	return 0;
//}

//#include<stdio.h>
//#include <stdlib.h>
//
//// �����Լ�����Ϳ���������ֳ�ͻ
//// ��Ŀ�飬�����֮�䶨������ֳ�ͻ
//int rand = 10;
//
//// C����û�취�������������������ͻ���⣬����C++�����namespace�����
//int main()
//{
//	printf("%d\n", rand);
//
//	return 0;
//}


//#include<stdio.h>
//#include <stdlib.h>
//
//// ��
//// �ֲ���/ȫ����1��ʹ��  2����������
////int a = 2;
//
//void f1()
//{
//	int a = 0;
//	printf("%d\n", a);
//	printf("%d\n",::a);  // ::�������޶���
//}
//
//void f2()
//{
//	int a = 1;
//}
//
//int main()
//{
//	printf("%d\n", a);
//	f1();
//
//	return 0;
//}

//#include "List.h"
//#include "Queue.h"
//
////int main()
////{
////	struct AQueue::Node node1;
////	struct BList::Node node2;
////
////	AQueue::min++;
////	BList::min++;
////
////
////
////	return 0;
////}
//
//int main()
//{
//	struct lz::A::Node node1;
//	struct lz::B::Node node2;
//
//	lz::A::min++;
//	lz::B::min++;
//
//	return 0;
//}

/////////////////////////////////////////////////
//#include <iostream>
//#include "Queue.h"
//using namespace lz;
////using namespace std;
//
//// 1��ָ�������ռ����
//// 2��ȫ��չ��. һ�������������ȫ��չ���ġ�
//// 3������
//
//int main()
//{
//	struct Queue q;
//	QueueInit(&q);
//	QueuePush(&q, 1);
//	QueuePush(&q, 2);
//
//	std::cout << "1111";
//
//	return 0;
//}

//#include <iostream>
//using namespace std;
//// ʵ�ʿ�������Ŀ����
//// 1��ָ�������ռ����
//// 3�����ò���չ��
//
//// С�ĳ����ճ���ϰ����̫����ֳ�ͻ
//// 2��ȫ��չ��.һ�������������ȫ��չ���ġ�
//
//// ����չ��
//using std::cout;
//using std::endl;
//
//// 17:30����
//
//int main()
//{
//	cout << "1111" << endl;
//	cout << "1111" << endl;
//	cout << "1111" << endl;
//	cout << "1111" << endl;
//
//	int i = 0;
//	std::cin >> i;
//
//	return 0;
//}


#include<iostream>
using namespace std;

//int main()
//{
//	// << ������
//	// endl '\n'
//	cout << "hello world" << endl;
//	cout << "hello world" << '\n';
//
//	// �Զ�ʶ������
//	//int n = 0;
//	//cin >> n;
//
//	//double* a = (double*)malloc(sizeof(double)*n);
//	//if (a == NULL)
//	//{
//	//	perror("malloc fail");
//	//	exit(-1);
//	//}
//
//	//for (int i = 0; i < n; ++i)
//	//{
//	//	cin >> a[i];
//	//}
//
//	//for (int i = 0; i < n; ++i)
//	//{
//	//	//cout << a[i] << " ";
//	//	printf("%.2f ", a[i]);
//	//}
//	//cout << endl;
//
//	char name[10] = "����";
//	int age = 18;
//	//...
//
//	cout << "������" << name << endl;
//	cout << "���䣺" << age << endl;
//
//	printf("������%s\n���䣺%d\n", name, age);
//
//	return 0;
//}

//////////////////////////////////////////////////////////////////////

//void Func(int a = 0)
//{
//	cout << a << endl;
//}
//
//int main()
//{
//	Func(1);
//	Func();
//
//	return 0;
//}

// ȫȱʡ
//void Func(int a = 10, int b = 20, int c = 30)
//{
//	cout << "a = " << a << endl;
//	cout << "b = " << b << endl;
//	cout << "c = " << c << endl;
//	cout << endl;
//}
//
//int main()
//{
//	// ʹ��ȱʡֵ�����������������ʹ��
//	Func(1, 2, 3);
//	Func(1, 2);
//	Func(1);
//	Func();
//
//	//Func(,2,);
//	//Func(, , 3);
//
//	return 0;
//}

// ��ȱʡ
// ���������������ȱʡ
void Func(int a, int b = 10, int c = 20)
{
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	cout << "c = " << c << endl;
}

struct Stack
{
	int* a;
	int top;
	int capacity;
};

void StackInit(struct Stack* ps, int defaultCapacity = 4)
{
	ps->a = (int*)malloc(sizeof(int) * defaultCapacity);
	if (ps->a == NULL)
	{
		perror("malloc fail");
		exit(-1);
	}
	ps->top = 0;
	ps->capacity = defaultCapacity;
}

int main()
{
	// ʹ��ȱʡֵ�����������������ʹ��
	Func(1, 2, 3);
	Func(1, 2);
	Func(1);

	Stack st1; // ���Ҫ��100����
	StackInit(&st1, 100);

	Stack st2; // ��֪����������
	StackInit(&st2);

	return 0;
}