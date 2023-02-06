#include "Stack.h"


////nullptr NULL本质是0
//void f(int)
//{
//	cout << "f(int)" << endl;
//}
//void f(int*)
//{
//	cout << "f(int*)" << endl;
//}
//int main()
//{
//	f(0);
//	f(NULL);
//	f(nullptr);
//	return 0;
//}

//ListNode in C with typedef
//typedef struct ListNode
//{
//	int val;
//	struct ListNode* next;
//}LN;
//Now, we use class(struct) instead typedef

//struct Stack
//{
//	void Init(int capacity)
//	{
//		_arr = (DataType*)malloc(sizeof(DataType) * capacity);
//		if (_arr == nullptr)
//		{
//			perror("malloc failed");
//			exit(-1);
//		}
//		_size = 0;
//		_capacity = 0;
//	}
//	void Destroy()
//	{
//		if (_arr)
//		{
//			free(_arr);
//			_arr = nullptr;
//			_size = 0;
//			_capacity = 0;
//		}
//	}
//	void Push(const DataType& data)
//	{
//		//check capacity
//		_arr[_size] = data;
//		_size++;
//	}
//	DataType Top()
//	{
//		return _arr[_size - 1];
//	}
//
//	DataType* _arr;
//	int _size;
//	int _capacity;
//};
// 
// 以下最好在.h和.cpp实现
//class Stack
//{
//public:
//	void Init(int capacity)
//	{
//		_arr = (DataType*)malloc(sizeof(DataType) * capacity);
//		if (_arr == nullptr)
//		{
//			perror("malloc failed");
//			exit(-1);
//		}
//		_size = 0;
//		_capacity = 0;
//	}
//	void Destroy()
//	{
//		if (_arr)
//		{
//			free(_arr);
//			_arr = nullptr;
//			_size = 0;
//			_capacity = 0;
//		}
//	}
//	void Push(const DataType& data)
//	{
//		//check capacity
//		_arr[_size] = data;
//		_size++;
//	}
//	DataType Top()
//	{
//		return _arr[_size - 1];
//	}
//private:
//	DataType* _arr;
//	int _size;
//	int _capacity;
//};
//int main()
//{
//	Stack st;
//	st.Init(10);
//	st.Push(1);
//	st.Push(2);
//	st.Push(3);
//	cout << st.Top() << endl;
//	st.Destroy();
//	return 0;
//}

//Date class
//int main()
//{
//	Date d1;
//	d1.Init(2023, 2, 6);
//	d1.Print();
//	cout << sizeof(d1) << endl;
//	Date d2;
//	cout << sizeof(d2) << endl;
//	return 0;
//}

//一个类的大小，实际就是该类中”成员变量”之和
//class A1
//{
//public:
//	void f1(){}
//private:
//	int _a;
//};
//class A2
//{
//public:
//	void f2() {}
//};
//class A3
//{
//};
//int main()
//{
//	A1 a1;
//	A2 a2;
//	A3 a3;
//	cout << sizeof(a1) << endl;
//	cout << sizeof(a2) << endl;
//	cout << sizeof(a3) << endl;
//	return 0;
//}


//this pointer
//int main()
//{
//	//Date d1, d2;
//	//d1.Init(2022, 1, 1);
//	//d2.Init(2023, 2, 6);
//	//d1.Print();
//	//d2.Print();
//	Date* p = nullptr;
//	p->TestThis();
//	(*p).TestThis();
//	//p->Init(2022, 1, 1); breakdown
//	return 0;
//}


//Stack in C++
int main()
{
	Stack st;
	st.Init();
	st.Push(1);
	st.Push(2);
	st.Push(3);
	st.Push(4);
	st.Push(50);
	cout << st.Top() << " " << st.Size() << endl;
	st.Pop();
	st.Pop();
	cout << st.Top() << " " << st.Size() << endl;
	st.Destroy();
	return 0;
}

