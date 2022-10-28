#include <iostream>

//int main()
//{
//	/*return 0;*/
//	std::cout << "Hello, World" << std::endl;
//	return 0;
//}


//int main()
//{
//	std::cout << "Enter two numbers" << std::endl;
//	int v1 = 0, v2 = 0;
//	std::cin >> v1 >> v2;
//	std::cout << "The product of " << v1 << " and " << v2 << " is " << v1 * v2 << std::endl;
//
//	return 0;
//}

//int main()
//{
//	std::cout << "Enter two numbers" << std::endl;
//	int v1 = 0, v2 = 0;
//	std::cin >> v1 >> v2;
//	std::cout << "The product of ";
//	std::cout << v1;
//	std::cout << " and ";
//	std::cout << v2;
//	std::cout << " is ";
//	std::cout << v1 * v2 << std::endl;
//	return 0;
//}

//int main()
//{
//	std::cout << "/*";
//	std::cout << "*/";
////	std::cout << /* "*/" */;
//	std::cout << /* "*/" /* "/*" */;
//	return 0;
//}

//int main()
//{
//	int sum = 0, num = 50;
//	while (num<=100)
//	{
//		sum += num;
//		++num;
//	}
//	std::cout << sum << std::endl;
//
//	return 0;
//}

//int main()
//{
//	int val = 10;
//	while (val >= 0)
//	{
//		std::cout << val << " ";
//		--val;
//	}
//
//	return 0;
//}

//int main()
//{
//	int sum = 0;
//	for (int i = 50; i <= 100; i++)
//	{
//		sum += i;
//	}
//	std::cout << "The sum from 50 to 100 is " << sum << std::endl;
//	return 0;
//}

//int main()
//{
//	for (int i = 10; i >= 0; i--)
//	{
//		std::cout << i << " ";
//	}
//	return 0;
//}

//int main()
//{
//	std::cout << "please input two integer num:" << std::endl;
//	int a = 0, b = 0;
//	std::cin >> a >> b;
//	if (a<b-1)
//	{
//		for (int i = a + 1; i < b; i++)
//		{
//			std::cout << i << " ";
//		}
//	}
//	else if (a==b-1)
//	{
//		std::cout << "there is no num between a and b!" << std::endl;
//	}
//	else
//	{
//		std::cout << "a shouble be smaller than b!" << std::endl;
//	}
//
//
//	return 0;
//}

//int main()
//{
//	//int small = 0, big = 0;
//	//std::cin >> small >> big;
//	//if (small>big)
//	//{
//	//	int temp = small;
//	//	small = big;
//	//	big = temp;
//	//	for (int i = small; i <= big; i++)
//	//	{
//	//		std::cout << i << " ";
//	//	}
//	//}
//	//else
//	//{
//	//	for (int i = small; i <= big; i++)
//	//	{
//	//		std::cout << i << " ";
//	//	}
//	//}
//
//
//
//	return 0;
//}

//int main() {
//    int k = 0;
//    std::cout << K << std::endl; // use of undeclared identifier 'K'
//    return 0;
//}

//int main()
//{
//	int sum = 0;
//	for (int val = 0; std::cin >> val; sum += val);
//
//	std::cout << sum;
//
//	return 0;
//}

//int main()
//{
//	int sum = 0, val = 0;
//	while (std::cin>>val)
//	{
//		sum += val;
//	}
//	std::cout << sum;
//	return 0;
//}
#include <iostream>
include "Sales_item.h"

int main()
{
	int currVal = 0, val = 0;
	if (std::cin>>currVal)
	{
		int cnt = 1;
		while (std::cin>>val)
		{
			if (val == currVal)
				++cnt;
			else
			{
				std::cout << currVal << " occurs " << cnt << " times" << std::endl;
				currVal = val;
				cnt = 1;
			}
		}
		std::cout << currVal << " occurs " << cnt << " times" << std::endl;
	}

	return 0;
}
