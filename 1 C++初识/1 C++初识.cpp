#include <iostream>
using namespace std;

#define day 7

int main()
{
	int a = 10;
	cout << "a = " << a << endl;

	cout << "一周里总有" << day << "天" << endl;
    
	const int month = 12;
	cout << "一年总共有" << month << "个月" << endl;

	cout << "short类型所占内存空间为: " << sizeof(short) << endl;
	cout << "int类型所占内存空间为: " << sizeof(int) << endl;
	cout << "long类型所占内存空间为: " << sizeof(long) << endl;
	cout << "long long类型所占内存空间为: " << sizeof(long long) << endl;
	cout << "double类型所占内存空间为: " << sizeof(double) << endl;
	cout << "float类型所占内存空间为: " << sizeof(float) << endl;

	float f1 = 3.14f;
	double d1 = 3.14;

	cout << f1 << endl;
	cout << d1 << endl;

	float f2 = 3e2;
	cout << f2 << endl;

	float f3 = 3e-2;
	cout << f3 << endl;

	char ch = 'a';
	cout << ch << endl;

	cout << sizeof(char) << endl;
	cout << (int)ch << endl;

	cout << "\\" << endl;
	cout << "\tHello" << endl;
	cout << "\n" << endl;

	char str1[] = "hello world";
	cout << str1 << endl;
	
	string str = "hello world";
	cout << str << endl;

	bool flag = true;
	cout << flag << endl;
	bool flag1 = false;
	cout << flag1 << "\t" << sizeof(flag1) << endl;

	//int aa = 0;
	//cout << "请输入整型变量：" << endl;
	//cin >> a;
	//cout << a << endl;

	//double d = 0;
	//cout << "请输入浮点型：" << endl;
	//cin >> d;
	//cout << d << endl;

	//char chc = 0;
	//cout << "请输入字符：" << endl;
	//cin >> chc;
	//cout << chc << endl;

	//string str2;
	//cout << "请输入string：" << endl;
	//cin >> str2;
	//cout << str2 << endl;

	//bool falgg = true;
	//cout << "请输入bool类型" << endl;
	//cin >> falgg;
	//cout << falgg << endl;

	int a1 = 10;
	int b1 = 3;

	cout << a1 + b1 << endl;
	cout << a1 - b1 << endl;
	cout << a1 * b1 << endl;
	cout << a1 / b1 << endl;
	cout << a1 % b1 << endl;

	int a2 = 10;
	int b2 = 20;
	cout << a2 / b2 << endl;

	double d11 = 0.5;
	double d22 = 0.33;
	cout << d11 / d22 << endl;

	int aaa = 10;
	a++;
	cout << a << endl;

	int bbb = 10;
	cout << bbb++ << endl;
	int ccc = 10;
	cout << ++ccc << endl;

	int a22 = 10;
	cout << a22++ * 10 << endl;

	int b22 = 10;
	cout << ++b22 * 10 << endl;

	int ak = 10;
	ak = 100;
	cout << ak << endl;

	ak += 2;
	cout << ak << endl;

	ak -= 2;
	cout << ak << endl;
	ak *= 2;
	cout << ak << endl;
	ak /= 2;
	cout << ak << endl;
	ak %= 2;
	cout << ak << endl;

	int four = 4;
	int three = 3;
	cout << (four == three) << endl;
	cout << (four != three) << endl;
	cout << (four > three) << endl;
	cout << (four < three) << endl;
	cout << (four >= three) << endl;
	cout << (four <= three) << endl;

	int ten = 10;
	cout << !ten << endl;
	cout << !!ten << endl;

	cout << (1&&0) << endl;
	cout << (1&&1) << endl;
	cout << (0&&0) << endl;
	cout << (1 || 0) << endl;
	cout << (1 || 1) << endl;
	cout << (0 || 0) << endl;


    
	return 0;
}

