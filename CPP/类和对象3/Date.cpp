﻿#include"Date.h"

Date::Date(int year, int month, int day)
	{
		_year = year;
		_month = month;
		_day = day;
	}
void Date::Print()
{
		cout << _year << "/" << _month << "/" << _day << endl;
}
bool Date::operator==(const Date& d)
{
	return _year == d._year 
		&& _month == d._month 
		&& _day == d._day;
}
bool Date::operator<(const Date& d)
{
		return _year < d._year
			|| (_year == d._year && _month < d._month)
			|| (_year == d._year && _month == d._month && _day < d._day);
}
	bool Date::operator<=(const Date& d)
	{
		return *this < d || *this == d;
	}
	bool Date::operator>(const Date& d)
	{
		return !(*this <= d);
	}
	bool Date::operator>=(const Date& d)
	{
		return !(*this < d);
	}
	bool Date::operator!=(const Date& d)
	{
		return !(*this == d);
	}
	Date Date::operator=(const Date& d)
	{
		if (this != &d)
		{
			_year = d._year;
			_month = d._month;
			_day = d._day;
		}
		return *this;
	}
int Date::GetMonthDay(int year, int month)
{
	assert(month > 0 && month < 13);

	int monthArray[13] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	if (month == 2 && ((year % 4 == 0 && year % 100 != 0) || (year % 400) == 0))
	{
		return 29;
	}
	else
	{
		return monthArray[month];
	}
}
Date& Date::operator+=(int day)
{
	_day += day;
	while (_day > GetMonthDay(_year, _month))
	{
		_day -= GetMonthDay(_year, _month);
		_month++;
		if (_month == 13)
		{
			++_year;
			_month = 1;
		}
	}
	return *this;
}
Date Date::operator+(int day)
{
	Date tmp(*this);

	tmp._day += day;
	while (tmp._day > GetMonthDay(tmp._year, tmp._month))
	{
		tmp._day -= GetMonthDay(tmp._year, tmp._month);
		tmp._month++;
		if (tmp._month == 13)
		{
			++tmp._year;
			tmp._month = 1;
		}
	}
	return tmp;
}
Date& Date::operator-=(int day)
{
	_day -= day;
	while (_day > GetMonthDay(_year, _month))
	{
		_day -= GetMonthDay(_year, _month);
		_month++;
		if (_month == 13)
		{
			++_year;
			_month = 1;
		}
	}
	return *this;
}
Date Date::operator-(int day)
{
	Date tmp(*this);

	tmp._day -= day;
	while (tmp._day > GetMonthDay(tmp._year, tmp._month))
	{
		tmp._day -= GetMonthDay(tmp._year, tmp._month);
		tmp._month++;
		if (tmp._month == 13)
		{
			++tmp._year;
			tmp._month = 1;
		}
	}
	return tmp;
}
int Date::operator-(const Date& d)
{
	Date max = *this;
	Date min = d;
	int flag = 1;
	if (max < min)
	{
		max = d;
		min = *this;
		flag = -1;
	}
	int nday = 0;
	//while (min != max)
	//{
	//	nday++;
	//	min += 1;
	//}
	for (nday; min != max; nday++)
	{
		min += 1;
	}
	return flag * nday;
}