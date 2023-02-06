#include "Stack.h"
//void Stack::Init(int capacity)
//{
//	_a = (DataType*)malloc(sizeof(DataType) * capacity);
//	if (nullptr == _a)
//	{
//		perror("malloc failed");
//		return;
//	}
//
//	_capacity = capacity;
//	_size = 0;
//}
//void Stack::Destroy()
//{
//	if (_a)
//	{
//		free(_a);
//		_a = nullptr;
//		_size = 0;
//		_capacity = 0;
//	}
//}
//void Stack::Push(const DataType data)
//{
//	//...
//	_a[_size++] = data;
//}
//DataType Stack::Top()
//{
//	return _a[_size - 1];
//}

//Date
void Date::Init(int year, int month, int day)
{
	_year = year;
	_month = month;
	_day = day;
}
void Date::Print()
{
	cout << _year << " " << _month << " " << _day << endl;
}
void Date::TestThis()
{
	cout << this << endl;
	cout << "TestThis" << endl;

}





//Stack in C++
void Stack::Init()
{
	_array = (DataType*)malloc(sizeof(DataType) * 3);
	if (NULL == _array)
	{
		perror("malloc failed");
		return;
	}
	_capacity = 3;
	_size = 0;
}
void Stack::Push(DataType data)
{
	CheckCapacity();
	_array[_size] = data;
	_size++;
}
void Stack::Pop()
{
	if (Empty())
		return;
	_size--;
}
DataType Stack::Top() { return _array[_size - 1]; }
int Stack::Empty() { return 0 == _size; }
int Stack::Size() { return _size; }
void Stack::Destroy()
{
	if (_array)
	{
		free(_array);
		_array = NULL;
		_capacity = 0;
		_size = 0;
	}
}
	void Stack::CheckCapacity()
	{
		if (_size == _capacity)
		{
			int newcapacity = _capacity * 2;
			DataType* temp = (DataType*)realloc(_array, newcapacity *
				sizeof(DataType));
			if (temp == NULL)
			{
				perror("realloc failed");
				return;
			}
			_array = temp;
			_capacity = newcapacity;
		}
	}