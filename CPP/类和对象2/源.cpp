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
//	//ǳ����,����ͷ��ڴ�,�������
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
//		cout << _year << "��" << _month << "��" << _day << "��" << endl;
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
//	// Ĭ�����ɹ��캯�������������Ͳ�����
//	// Ĭ�������������������������Ͳ�����
//	Date(int year = 0)
//	{}
//
//	void Print()
//	{
//		//cout << _year << "/" << _month << "/" << _day << endl;
//		cout << _year << "��" << _month << "��" << _day << "��" << endl;
//	}
//
//private:
//	// ��������/��������
//	
//	// ����λ�ø���ȱʡֵ
//	int _year ;
//	int _month ;
//	int _day ;
//};
//
//class MyQueue {
//public:
//	// Ĭ�����ɹ��캯�������Զ������ͳ�Ա�����������Ĭ�Ϲ��캯��
//	// Ĭ�������������������Զ������ͳ�Ա�������������������
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
//	// ��������
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
//	// ���캯��
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
//// ��ֵ����
//// �������ͣ�����������ֱ�ӿ���
//// �Զ������͵Ŀ�������Ҫ���ÿ�������
//void Func1(Date d)
//{
//
//}
//
//// �����ô���
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



//��������
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