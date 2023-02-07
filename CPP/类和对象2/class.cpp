#include "class.h"

//Date
//void Date::Init(int year, int month, int day)
//{
//	_year = year;
//	_month = month;
//	_day = day;
//}
//构造函数取代Date::Init
//无参构造
//Date::Date()
//{}
////有参构造
//Date::Date(int year, int month, int day)
//{
//	_year = year;
//	_month = month;
//	_day = day;
//}
//void Date::Print()
//{
//	cout << _year << "-" << _month << "-" << _day << endl;
//}



//Time::Time()
//{
//	cout << "Time()" << endl;
//	_hour = 0;
//	_minute = 0;
//	_second = 0;
//}
//Time::~Time()
//{
//	cout << "~Time()" << endl;
//}
//Date::Date()
//{
//	_year = 1;
//	_month = 1;
//	_day = 1;
//}
//Date::Date(int year, int month, int day)
//{
//	_year = year;
//	_month = month;
//	_day = day;
//}
//void Date::Print()
//{
//	cout << _year << "-" << _month << "-" << _day << endl;
//}
//
//
////Stack
//Stack::Stack(int capacity)
//{
//	_arr = (DataType*)malloc(sizeof(DataType) * capacity);
//	if (_arr == nullptr)
//	{
//		perror("malloc failed!");
//		exit(-1);
//	}
//	_capacity = capacity;
//	_size = 0;
//}
//void Stack::Push(DataType data)
//{
//	_arr[_size] = data;
//	_size++;
//}
//Stack::~Stack()
//{
//	if (_arr)
//	{
//		free(_arr);
//		_arr = nullptr;
//		_capacity = 0;
//		_size = 0;
//	}
//}



	//Stack::Stack()
	//{
	//	cout << "Stack()" << endl;

	//	_a = nullptr;
	//	_size = _capacity = 0;
	//}

	//Stack::Stack(int n)
	//{
	//	_a = (int*)malloc(sizeof(int) * n);
	//	if (nullptr == _a)
	//	{
	//		perror("malloc申请空间失败");
	//		return;
	//	}

	//	_capacity = n;
	//	_size = 0;
	//}

	//void Stack::Push(int x)
	//{
	//	//...
	//	_a[_size++] = x;
	//}

	//bool Stack::Empty()
	//{
	//	// ...
	//	return _size == 0;
	//}

	//int Stack::Top()
	//{
	//	//...
	//	return _a[_size - 1];
	//}

	////...
	//Stack::~Stack()
	//{
	//	cout << _capacity << "~Stack()" << endl;
	//	free(_a);
	//	_a = nullptr;
	//	_size = _capacity = 0;
	//}





//拷贝构造
Date::Date(int year, int month, int day)
{
	_year = year;
	_month = month;
	_day = day;
}
Date::Date(const Date& d)
{
	cout << "Date(const Date& d)" << endl;
	_year = d._year;
	_month = d._month;
	_day = d._day;
}
int Date::GetMonthDay(int year, int month)
{
	assert(month > 0 && month < 13);
	int monthArray[13] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	if (month == 2 && ((year % 4 == 0 && year % 100 == 0) || (year % 400 == 0)))
	{
		return 29;
	}
	else
	{
		return monthArray[month];
	}
}
Date Date::GetAfterXDay(int x)
{
	cout << "1" << endl;
	//copy
	Date tmp(*this);
	cout << "2" << endl;
	cout << "3" << endl;
	tmp._day += x;
	while (tmp._day > GetMonthDay(tmp._year, tmp._month))
	{
		tmp._day -= GetMonthDay(tmp._year, tmp._month);
		tmp._month++;
		if (tmp._month == 13)
		{
			tmp._year++;
			tmp._month = 1;
		}
	}
	return tmp;
}
Date& Date::AddEqual(int x)
{
	//_day += x;
	this->_day += x;
	while (_day > GetMonthDay(_year, _month))
	{
		_day -= GetMonthDay(_year, _month);
		_month++;
		if (_month == 13)
		{
			_year++;
			_month = 1;
		}
	}
	return *this;
}

void Date::Print()
{
		cout << _year << "年" << _month << "月" << _day << "日" << endl;
}
