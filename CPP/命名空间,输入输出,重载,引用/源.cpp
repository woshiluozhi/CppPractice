#include "Test.h"

//you can use c in c++
//int main()
//{
//	printf("hello, world!\n");
//	return 0;
//}

//namespace
//using namespace std;
//int main()
//{
//	//std::cout << "hello, world" << std::endl;
//	cout << "hello, world!" << endl;
//	return 0;
//}


//scope
//void f1()
//{
//	int a = 0;
//	printf("%d\n", a);
//}
//void f2()
//{
//	int a = 1;
//}
//int main()
//{
//	int a = 8;
//	printf("%d\n", a);
//	f2();
//	f1();
//	return 0;
//}


// ����չ��
//using std::cout;
//using std::endl;
//int main()
//{
//	cout << "hello" << endl;
//	int i = 0;
//	std::cin >> i;
//	cout << i << endl;
//	return 0;
//}

using namespace std;

//int main()
//{
//	// endl == '\n'
//	cout << "hello, world" << endl;
//	cout << "hello, world" << '\n';
//	cout << "hello, world" << '\n';
//
//	//��������
//	int n = 0;
//	cin >> n;
//	double* arr = (double*)malloc(sizeof(double) * n);
//	if (arr == NULL)
//	{
//		perror("malloc failed!");
//		exit(-1);
//	}
//	for (int i = 0; i < n; i++)
//	{
//		cin >> arr[i];
//	}
//	for (int i = 0; i < n; i++)
//	{
//		cout << arr[i] << endl;
//	}
//	return 0;
//}

////ȱʡ
//void func1(int a = 0)
//{
//	cout << a << endl;
//}
////ȫȱʡ
//void func2(int a = 10, int b = 20, int c = 30)
//{
//	cout << "a = " << a << endl;
//	cout << "b = " << b << endl;
//	cout << "c = " << c << endl;
//}
////��ȱʡ
//void func3(int a, int b = 20, int c = 30)
//{
//	cout << "a = " << a << endl;
//	cout << "b = " << b << endl;
//	cout << "c = " << c << endl;
//}
//int main()
//{
//	func1(1);
//	func1();
//	func2(1, 2, 3);
//	func2(1, 2);//ȫȱʡ���Բ�������ֵ
//	func2();
//	func3(6);//��ȱʡ������ֵ����ǰ�����int a
//	return 0;
//}


//typedef struct Stack
//{
//	int* a;
//	int top;
//	int capacity;
//}ST;
////��ȱʡ,Ĭ��capacityΪ4
//void StackInit(ST* ps, int defaultCapacity = 4)
//{
//	ps->a = (int*)malloc(sizeof(int) * defaultCapacity);
//	if (ps->a == NULL)
//	{
//		perror("malloc failed!");
//		exit(-1);
//	}
//	ps->top = 0;
//	ps->capacity = defaultCapacity;
//}
//int main()
//{
//	ST st1;
//	StackInit(&st1, 100);
//
//	ST st2;
//	StackInit(&st2);
//	return 0;
//}


//����overload:
//�������Ͳ�ͬ
//int Add(int left, int right)
//{
//	cout << "int Add(int left, int right)" << endl;
//	return left + right;
//}
//double Add(double left, double right)
//{
//	cout << "double Add(double left, double right)" << endl;
//	return left + right;
//}
////����������ͬ
//void func()
//{
//	cout << "func()" << endl;
//}
//void func(int a)
//{
//	cout << "func(int a)" << endl;
//}
////��������˳��ͬ
//void f(int a, char c)
//{
//	cout << "void f(int a, char c)" << endl;
//}
//void f(char c, int a)
//{
//	cout << "void f(char c, int a)" << endl;
//}
//
//int main()
//{
//	Add(10, 20);
//	Add(10.0, 20.0);
//	func();
//	func(3);
//	f(1, 'c');
//	f('a', 1);
//
//	return 0;
//}


// //���� == ��"���"
////����ʱ�����ʼ��
//void TestRef()
//{
//	int a = 10;
//	int& ra = a;
//	int& rra = a;
//	cout << &a << endl;
//	cout << &ra << endl;
//	cout << &rra << endl;
//}
////������
//void TestConstRef()
//{
//	const int a = 10;
//	const int& ra = a;
//
//	const int& rb = 10;
//
//	//�����ǳ���,���ñ���const.���Ͳ�ͬ���Զ�ת��
//	double d = 1.2;
//	const int& rd = d;
//	cout << rd << endl;
//	const double& rrd = d;
//	cout << rrd << endl;
//}
//int main()
//{
//	int i = 0;
//	int& j = i;
//	int k = i;
//	cout << &i << endl;
//	cout << &j << endl;
//	cout << &k << endl;
//	TestRef();
//	TestConstRef();
//	return 0;
//}

////���õ�ʹ��
////����
//void Swap(int& left, int& right)
//{
//	int temp = left;
//	left = right;
//	right = temp;
//}
////������ֵ  int& Add(int a, int b) { ... return c} == int& c  
//int& Add(int a, int b)
//{
//	int c = a + b;
//	/*return (a + b);*/
//	return c;
//}
//int main()
//{
//	//int a = 10, b = 20;
//	//int& ra = a;
//	//int& rb = b;
//	//Swap(ra, rb);
//	//cout << a << " " << b << endl;
//
//	int& ret = Add(3, 4);
//	cout << ret << endl;
//	Add(5, 5);
//	cout << ret << endl;
//	return 0;
//}

////SingleList with Ref
//typedef struct Node
//{
//	struct Node* next;
//	int val;
//}Node, * PNode;
//void PushBack(PNode& phead, int x)
//{
//	PNode newNode = (PNode)malloc(sizeof(Node));
//	Node* newNode2 = (Node*)malloc(sizeof(Node));
//	if (phead == nullptr)
//	{
//		phead = newNode;
//	}
//	cout << newNode << endl;
//	cout << newNode2 << endl;
//}
//
//int main()
//{
//	Node* plist = NULL;
//	PushBack(plist, 1);
//	PushBack(plist, 2);
//	PushBack(plist, 3);
//	return 0;
//}

//�Ƚ� ��ֵ �� ������Ч�� (��ֵ�ǿ���,Ч�ʵ�)
//struct A
//{
//	int a[10000];
//};
//void testV(A a){}
//void testR(A& a){}
//void Compare()
//{
//	A a;
//	A& ra = a;
//
//	size_t begin1 = clock();
//	for (int i = 0; i < 10000; i++)
//	{
//		testV(a);
//	}
//	size_t end1 = clock();
//
//	size_t begin2 = clock();
//	for (int i = 0; i < 10000; i++)
//	{
//		testR(ra);
//	}
//	size_t end2 = clock();
//	cout << end1 - begin1 << endl;
//	cout << end2 - begin2 << endl;
//}
//int main()
//{
//	Compare();
//	return 0;
//}


////compare ref and pointer
//int main()
//{
//	int a = 0;
//	int& ra = a;
//
//	cout << "&a = " << &a << endl;
//	cout << "&ra = " << &ra << endl;
//	cout << (&a == &ra) << endl;
//
//	return 0;
//}

//inline

//// C++�Ƽ�
//// const��enum����곣��
//// inlineȥ����꺯��

//// ��ȱ�㣺
//// 1�����ܵ���
//// 2��û�����Ͱ�ȫ�ļ��
//// 3����Щ�����·ǳ�����,���׳�������������
// Ҫ��ʵ��ADD�꺯��,�����ŷ�ֹ����������δ֪�����Ƚ��м���
//#define ADD(x, y) ((x) + (y))
//
//int main()
//{
//	cout << ADD(1, 2) << endl;
//	return 0;
//}

//inline int Add(int x, int y)
//{
//	return x + y;
//}
//
//int main()
//{
//	int ret = Add(1, 2);
//	cout << ret << endl;
//	return 0;
//}

////auto (C++11)
//int TestAuto()
//{
//	return 10;
//}
//int main()
//{
//	int a = 10;
//	auto b = a;
//	auto c = 'a';
//	auto d = TestAuto();
//	cout << typeid(a).name() << endl;
//	cout << typeid(b).name() << endl;
//	cout << typeid(c).name() << endl;
//	cout << typeid(d).name() << endl;
//	return 0;
//}

////for ���ڷ�Χ��forѭ��(C++11) ����
//void TestFor()
//{
//	int arr[] = { 1, 2, 3, 4, 5 };
//	for (auto& a : arr)
//	{
//		a = a + 10;
//	}
//	for (auto a : arr)
//	{
//		cout << a << " ";
//	}
//}
//int main()
//{
//	TestFor();
//	return 0;
//}


