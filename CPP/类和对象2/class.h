#pragma once
#include <iostream>
#include <assert.h>
using namespace std;

//Date
//class Date
//{
//public:
//	Date();
//	Date(int year, int month, int day);
//	//void Init(int year, int month, int day);
//	void Print();
//private:
//	int _year;
//	int _month;
//	int _day;
//};

//Time
//class Time
//{
//public:
//	Time();
//	~Time();
//private:
//	int _hour;
//	int _minute;
//	int _second;
//};
//class Date
//{
//public:
//	Date();
//	//C2668	“Date::Date”: 对重载函数的调用不明确
//	//Date(int year = 2, int month = 2, int day = 2);
//	Date(int year, int month, int day);
//	void Print();
//private:
//	int _year;
//	int _month;
//	int _day;
//	//内置类型成员变量在类中声明时可以给默认值
//	//int _year = 0;
//	//int _month = 0;
//	//int _day = 0;
//	Time _t;
//};


//typedef int DataType;
//class Stack
//{
//public:
//	Stack(int capacity = 3);
//	void Push(DataType data);
//	~Stack();
//private:
//	DataType* _arr;
//	int _capacity;
//	int _size;
//};


//class Stack
//{
//public:
//	Stack();
//	Stack(int n);
//	void Push(int x);
//	bool Empty();
//	int Top();
//	//...
//	~Stack();
//private:
//	int* _a;
//	int _size;
//	int _capacity;
//};


//拷贝构造
class Date
{
public:
	Date(int year = 2000, int month = 1, int day = 1);
	Date(const Date& d);
	int GetMonthDay(int year, int month);
	Date GetAfterXDay(int x);
	Date& AddEqual(int x);
	void Print();
private:
	int _year;
	int _month;
	int _day;
};
