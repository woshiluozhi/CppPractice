#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
//int rand = 10;
// C����û�취�������������������ͻ���⣬����C++�����namespace�����
//int main()
//{
//	printf("%d\n", rand);
//	return 0;
//}
//// �����󱨴�error C2365: ��rand��: �ض��壻��ǰ�Ķ����ǡ�������
namespace luozhi
{
// �����ռ��п��Զ������/����/����
	int rand = 10;
	int Add(int left, int right)
	{
		return left + right;
	}
//һ�������ռ�Ͷ�����һ���µ������������ռ��е��������ݶ������ڸ������ռ���
//2.2 �����ռ�ʹ��
//�����ռ��г�Ա�����ʹ���أ����磺
    struct Node
	{
		struct Node* next;
		int val;
	};
}
//2. �����ռ����Ƕ��
// test.cpp
namespace N1
{
	int a;
	int b;
	int Add(int left, int right)
	{
		return left + right;
	}
	namespace N2
	{
		int c;
		int d;
		int Sub(int left, int right)
		{
			return left - right;
		}
	}
}
//3. ͬһ��������������ڶ����ͬ���Ƶ������ռ�,����������ϳ�ͬһ�������ռ��С�
// ps��һ�������е�test.h������test.cpp������N1�ᱻ�ϲ���һ��
// test.h
namespace N1
{
	int Mul(int left, int right)
	{
		return left * right;
	}
}
namespace N1
{
	int Div(int left, int right)
	{
		return left / right;
	}
}
using N1::b;
using namespace N1;
int main()
{
	printf("%d\n", N1::a);
	printf("%d\n", b);
	printf("%d\n", Mul(10, 20));
}