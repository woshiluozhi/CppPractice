#include "class.h"

//Date
//int main()
//{
//	/*Date d1;
//	d1.Init(2022, 2, 22);*/
//	Date d1;
//	Date d2(2023, 2, 7);
//	d1.Print();
//	d2.Print();
//	return 0;
//}


//Time
//int main()
//{
//	Date d;
//	d.Print();
//	Date d1(1, 2, 3);
//	d1.Print();
//	return 0;
//}


//Stack 
//void TestStack()
//{
//	Stack s(5);
//	s.Push(11);
//	s.Push(15);
//}
//int main()
//{
//	TestStack();
//
//	Date d;
//	return 0;
//}









//int main()
//{
//	Stack st0;
//	Stack st(4);
//
//	st.Push(1);
//	st.Push(2);
//	st.Push(3);
//	st.Push(4);
//	//浅拷贝,多次释放内存,程序崩溃
//	//Stack stcopy(st);
//
//	//st.Destroy();
//
//	return 0;
//}

//class Date
//{
//public:
//	//Date()
//	//{
//	//	_year = 1;
//	//	_month = 1;
//	//	_day = 1;
//	//}
//
//	//Date(int year, int month, int day)
//	//{
//	//	_year = year;
//	//	_month = month;
//	//	_day = day;
//	//}
//
//	Date(int year = 1, int month = 1, int day = 1)
//	{
//		_year = year;
//		_month = month;
//		_day = day;
//	}
//
//	void Print()
//	{
//		//cout << _year << "/" << _month << "/" << _day << endl;
//		cout << _year << "年" << _month << "月" << _day << "日" << endl;
//	}
//
//private:
//	int _year;
//	int _month;
//	int _day;
//};
//
//int main()
//{
//	Date d1;
//	Date d2(2023, 2, 3);
//	Date d3(2023);
//	Date d4(2023, 2);
//
//	d1.Print();
//	d2.Print();
//	d3.Print();
//	d4.Print();
//
//	return 0;
//}

//class Date
//{
//public:
//	// 默认生成构造函数，对内置类型不处理
//	// 默认生成析构函数，对内置类型不处理
//	Date(int year = 0)
//	{}
//
//	void Print()
//	{
//		//cout << _year << "/" << _month << "/" << _day << endl;
//		cout << _year << "年" << _month << "月" << _day << "日" << endl;
//	}
//
//private:
//	// 基本类型/内置类型
//	
//	// 声明位置给的缺省值
//	int _year ;
//	int _month ;
//	int _day ;
//};
//
//class MyQueue {
//public:
//	// 默认生成构造函数，对自定义类型成员，会调用他的默认构造函数
//	// 默认生成析构函数，对自定义类型成员，会调用他的析构函数
//
//	void push(int x) {
//
//	}
//	//....
//
//	Stack _pushST;
//	Stack _popST;
//	int _size = 0;
//};
//
//int main()
//{
//	Date d1;
//	d1.Print();
//
//	MyQueue q;
//
//	return 0;
//}



//copy
//class Date
//{
//public:
//	Date(int year = 1900, int month = 1, int day = 1)
//	{
//		_year = year;
//		_month = month;
//		_day = day;
//	}
//	//Ref
//	Date(const Date& d)
//	{
//		_year = d._year;
//		_month = d._month;
//		_day = d._day;
//		cout << "Date(const Date& d)" << endl;
//	}
//private:
//	int _year;
//	int _month;
//	int _day;
//};
//int main()
//{
//	Date d1;
//	Date d2(d1);
//	return 0;
//}


//class Time
//{
//public:
//	Time()
//	{
//		_hour = 1;
//		_minute = 1;
//		_second = 1;
//	}
//	Time(const Time& t)
//	{
//		_hour = t._hour;
//		_minute = t._minute;
//		_second = t._second;
//		cout << "Time::Time(const Time&)" << endl;
//	}
//private:
//	int _hour;
//	int _minute;
//	int _second;
//};
//class Date
//{
//private:
//	
//	int _year = 1;
//	int _month = 1;
//	int _day = 1;
//	
//	Time _t;
//};
//int main()
//{
//	Date d1;
//	Date d2(d1);
//	return 0;
//}







//class Date
//{
//public:
//	Date(int year = 1900, int month = 1, int day = 1)
//	{
//		_year = year;
//		_month = month;
//		_day = day;
//	}
//	
//	// 拷贝构造
//	// Date d2(d1);
//	Date(const Date& d)
//	{
//		cout << "Date(Date& d)" << endl;
//
//		_year = d._year;
//		_month = d._month;
//		_day = d._day;
//
//		/*d._year = _year;
//		d._month = _month;
//		d._day = _day;*/
//	}
//
//	// 构造函数
//	//Date(const Date* d)
//	//{
//	//	cout << "Date(Date& d)" << endl;
//
//	//	_year = d->_year;
//	//	_month = d->_month;
//	//	_day = d->_day;
//
//	//	/*d._year = _year;
//	//	d._month = _month;
//	//	d._day = _day;*/
//	//}
//
//private:
//	int _year;
//	int _month;
//	int _day;
//};
//
//// 传值传参
//// 内置类型，编译器可以直接拷贝
//// 自定义类型的拷贝，需要调用拷贝构造
//void Func1(Date d)
//{
//
//}
//
//// 传引用传参
//void Func2(Date& d)
//{
//
//}
//
//void Func3(Date* d)
//{
//
//}
//
//int main()
//{
//	Date d1(2023, 2, 3);
//	Date d2(d1);
//	Date d3 = d1;
//
//	//Date d4(&d1);
//	//Date d5 = &d1;
//
//	Func1(d1);
//	//Func2(d1);
//	//Func3(&d1);
//
//	return 0;
//}



//拷贝构造
int main()
{
	Date d1(2023, 2, 3);
	Date d2 = d1.GetAfterXDay(100);
	Date d3 = d1.GetAfterXDay(150);

	d1.Print();
	d2.Print();
	d3.Print();

	d1.AddEqual(200);
	d1.Print();
	return 0;
}