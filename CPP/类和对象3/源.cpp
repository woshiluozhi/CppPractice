#include "Date.h"

// 运算符重载
//
int main()
{
	Date d1(2014, 9, 1);
	Date d2(2018, 6, 30);
	Date d3(2021, 8, 28);
	Date d4(2023, 2, 7);
	cout << (d2 - d1) << endl;
	cout << (d3 - d2) << endl;
	cout << (d4 - d3) << endl;
	cout << (d4 - d1) << endl;
	cout << (d1 < d2) << endl;
	cout << (d3 > d4) << endl;
	cout << (d1 == d4) << endl;
	d1 = d1;
	d3 = d1 = d2; // d1.operator=(d2);
	cout << (d1 == d2) << endl;
	cout << (d1 == d3) << endl;
	d1.Print();
	Date d5 = d1; // 拷贝构造
	Date d6(d1); // 拷贝构造 
	cout << (d1 == d6) << endl;
	cout << (d1 == d5) << endl;
	return 0;
}