//#include <iostream>
//
//using namespace std;

//int add(int num1, int num2)
//{
//	int sum = num1 + num2;
//	return sum;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 10;
//	int sum = add(a, b);
//	cout << "sum = " << sum << endl;
//
//	a = 100;
//	b = 100;
//	sum = add(a, b);
//	cout << "sum = " << sum << endl;
//	return 0;
//}

//void swap(int num1, int num2)
//{
//	cout << "����ǰ��" << endl;
//	cout << "num1 = " << num1 << endl;
//	cout << "num2 = " << num2 << endl;
//
//	int temp = num1;
//	num1 = num2;
//	num2 = temp;
//
//	cout << "������" << endl;
//	cout << "num1 = " << num1 << endl;
//	cout << "num2 = " << num2 << endl;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//
//	swap(a, b);
//
//	cout << "main�е�a���ڣ�" << a << endl;
//	cout << "main�е�b���ڣ�" << b << endl;
//
//	return 0;
//}

////�޲��޷�
//void test01()
//{
//	cout << "this is test01" << endl;
//}
//
////�в��޷�
//void test02(int a)
//{
//	cout << "this is test02" << endl;
//	cout << "a = " << a << endl;
//}
//
////�޲��з�
//int test03()
//{
//	cout << "this is test03" << endl;
//	return 10;
//}
//
////�в��з�
//int test04(int a, int b)
//{
//	cout << "this is test04" << endl;
//	int sum = a + b;
//	return sum;
//}
//
//int main()
//{
//	test01();
//	test02(1);
//	test03();
//	test04(1,3);
//	cout << test04(2, 6) << endl;
//	return 0;
//}


//����������

//int max(int a, int b);
//int max(int a, int b);
//int max(int a, int b)
//{
//	return a > b ? a : b;
//}
//
//int main()
//{
//	int a = 100;
//	int b = 200;
//	cout << max(a, b) << endl;
//
//	return 0;
//}

//�������ļ��ı�д

#include "swap.h"

void swap(int a, int b)
{
	int temp = a;
	a = b;
	b = temp;
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
}















