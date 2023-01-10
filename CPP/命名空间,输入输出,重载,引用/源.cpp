#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
//int rand = 10;
// C语言没办法解决类似这样的命名冲突问题，所以C++提出了namespace来解决
//int main()
//{
//	printf("%d\n", rand);
//	return 0;
//}
//// 编译后后报错：error C2365: “rand”: 重定义；以前的定义是“函数”
namespace luozhi
{
// 命名空间中可以定义变量/函数/类型
	int rand = 10;
	int Add(int left, int right)
	{
		return left + right;
	}
//一个命名空间就定义了一个新的作用域，命名空间中的所有内容都局限于该命名空间中
//2.2 命名空间使用
//命名空间中成员该如何使用呢？比如：
    struct Node
	{
		struct Node* next;
		int val;
	};
}
//2. 命名空间可以嵌套
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
//3. 同一个工程中允许存在多个相同名称的命名空间,编译器最后会合成同一个命名空间中。
// ps：一个工程中的test.h和上面test.cpp中两个N1会被合并成一个
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