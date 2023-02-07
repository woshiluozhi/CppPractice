#pragma once
#include <iostream>
#include <assert.h>
using namespace std;




class Date
{
public:
	Date(int year = 2000, int month = 1, int day = 1);
	void Print();
	bool operator==(const Date& d);
	bool operator<(const Date& d);
	bool operator>(const Date& d);
	bool operator<=(const Date& d);
	bool operator>=(const Date& d);
	bool operator!=(const Date& d);
	Date operator=(const Date& d);
	int GetMonthDay(int year, int month);
	Date& operator+=(int day);
	Date operator+(int day);
	Date& operator-=(int day);
	Date operator-(int day);
	int operator-(const Date& d);

private:
	int _year;
	int _month;
	int _day;
};
