#pragma once
#include <stdlib.h>
#include<iostream>
#include<map>
#include<string>
using namespace std;
// ���Ա���������Ͷ������
//struct Stack
//typedef int DataType;
//class Stack
//{
//public:
//	// ��Ա����
//	void Init(int capacity = 4);
//	void Destroy();
//	void Push(const DataType data);
//	DataType Top();
//
//private:
//	// ��Ա����
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

