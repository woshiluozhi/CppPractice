//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#include <stdlib.h>
////int rand = 10;
//// C����û�취�������������������ͻ���⣬����C++�����namespace�����
////int main()
////{
////	printf("%d\n", rand);
////	return 0;
////}
////// �����󱨴�error C2365: ��rand��: �ض��壻��ǰ�Ķ����ǡ�������
//namespace luozhi
//{
//// �����ռ��п��Զ������/����/����
//	int rand = 10;
//	int Add(int left, int right)
//	{
//		return left + right;
//	}
////һ�������ռ�Ͷ�����һ���µ������������ռ��е��������ݶ������ڸ������ռ���
////2.2 �����ռ�ʹ��
////�����ռ��г�Ա�����ʹ���أ����磺
//    struct Node
//	{
//		struct Node* next;
//		int val;
//	};
//}
////2. �����ռ����Ƕ��
//// test.cpp
//namespace N1
//{
//	int a;
//	int b;
//	int Add(int left, int right)
//	{
//		return left + right;
//	}
//	namespace N2
//	{
//		int c;
//		int d;
//		int Sub(int left, int right)
//		{
//			return left - right;
//		}
//	}
//}
////3. ͬһ��������������ڶ����ͬ���Ƶ������ռ�,����������ϳ�ͬһ�������ռ��С�
//// ps��һ�������е�test.h������test.cpp������N1�ᱻ�ϲ���һ��
//// test.h
//namespace N1
//{
//	int Mul(int left, int right)
//	{
//		return left * right;
//	}
//}
//namespace N1
//{
//	int Div(int left, int right)
//	{
//		return left / right;
//	}
//}
//using N1::b;
//using namespace N1;
//int main()
//{
//	printf("%d\n", N1::a);
//	printf("%d\n", b);
//	printf("%d\n", Mul(10, 20));
//}


#include <iostream>
using namespace std;

//int main()
//{
//	cout << "hello world!" << endl;
//	int a = 0;
//	double b = 0;
//	char c;
//	cin >> a;
//	cin >> b >> c;
//	cout << a << endl;
//	cout << b << " " << c << endl;
//
//	return 0;
//}

//void Func(int a = 0)
//{
//	cout << a << endl;
//}
//int main()
//{
//	Func(); // û�д���ʱ��ʹ�ò�����Ĭ��ֵ
//	Func(10); // ����ʱ��ʹ��ָ����ʵ��
//	return 0;
//}

//void Fun1(int a = 10, int b = 20, int c = 30)
//{
//	cout << "a = " << a << endl;
//	cout << "b = " << b << endl;
//	cout << "c = " << c << endl;
//}
//int main()
//{
//	Fun1();
//	Fun1(1);
//	Fun1(1, 2);
//	Fun1(1, 2, 3);
//	return 0;
//}


//void Fun1(int a, int b = 20, int c = 30)
//{
//	cout << "a = " << a << endl;
//	cout << "b = " << b << endl;
//	cout << "c = " << c << endl;
//}
//int main()
//{
//	//Fun1();
//	Fun1(1);
//	Fun1(1, 2);
//	Fun1(1, 2, 3);
//	return 0;
//}

//int Add(int left, int right)
//{
//	cout << "int Add(int left, int right)" << endl;
//	return left + right;
//}
//
//double Add(double left, double right)
//{
//	cout << "double Add(int left, int right)" << endl;
//	return left + right;
//}
//
//void fun1()
//{
//	cout << "fun1()" << endl;
//}
//void fun1(int a)
//{
//	cout << "fun1(int a)" << endl;
//}
//
//void f(int a, char b)
//{
//	cout << "f(int a, char b)" << endl;
//}
//void f(char a, int b)
//{
//	cout << "f(char b, int a)" << endl;
//}
//
//int main()
//{
//	//cout << Add(1, 1) << endl;
//	//cout << Add(1.0, 1.0) << endl;
//	//fun1();
//	//fun1(1);
//	f(1, 'c');
//	f('c', 2);
//	return 0;
//}

void TestRef()
{
	//int a = 10;
	//int& ra = a;
	//int& raa = a;
	//int& raaa = ra;
	//cout << "a =    " << &a << endl;
	//cout << "ra =   " << &ra << endl;
	//cout << "raa =  " << &raa << endl;
	//cout << "raaa = " << &raaa << endl;

	//int& a = 10;
	const int& a = 10;
}

//void Swap(int& left, int& right)
//{
//	int temp = left;
//	left = right;
//	right = temp;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int& ra = a;
//	int& rb = b;
//	Swap(ra, rb);
//	cout << a << " " << b << endl;
//	return 0;
//}

int& Add(int a, int b)
{
	int c = a + b;
	return c;
}

int main()
{
	int& ret = Add(1, 2);
	cout << "Add(1, 2) is " << ret << endl;
	Add(3, 4);
	cout << "Add(1, 2) is " << ret << endl;
	return 0;
}