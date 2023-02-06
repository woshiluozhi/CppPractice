#pragma once
#include <stdlib.h>
#include<iostream>
#include<map>
#include<string>
using namespace std;
// 类成员函数声明和定义分离
//struct Stack
//typedef int DataType;
//class Stack
//{
//public:
//	// 成员函数
//	void Init(int capacity = 4);
//	void Destroy();
//	void Push(const DataType data);
//	DataType Top();
//
//private:
//	// 成员变量
//	int* _a;
//	int _size;
//	int _capacity;
//};

class Date
{
public:
	void Init(int year, int month, int day);
	void Print();
	void TestThis();
private:
	int _year;
	int _month;
	int _day;
};


//Stack in C++
typedef int DataType;
class Stack
{
public:
	void Init();
	void Push(DataType data);
	void Pop();
	DataType Top();
	int Empty();
	int Size();
	void Destroy();
private:
	void CheckCapacity();
private:
	DataType* _array;
	int _capacity;
	int _size;
};

