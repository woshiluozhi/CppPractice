#include <iostream>

using namespace std;

int main()
{
	//int score = 0;
	//cout << "请输入你的分数： " << endl;
	//cin >> score;

	//cout << "你输入的分数是: " << score << endl;

	//if (score > 600)
	//{
	//	cout << "你考上了一本！" << endl;
	//	if (score > 700)
	//	{
	//		cout << "考上了北大" << endl;
	//	}
	//	else if (score > 650)
	//	{
	//		cout << "考上了清华" << endl;
	//	}
	//	else
	//	{
	//		cout << "考上了人大" << endl;
	//	}
	//}
	//else if (score > 500)
	//{
	//	cout << "你考上二本！" << endl;
	//}
	//else if (score > 400)
	//{
	//	cout << "你考上了三本" << endl;
	//}
	//else
	//{
	//	cout << "你没考上大学" << endl;
	//}

	//int a = 10;
	//int b = 20;
	//int c = 0;

	//c = a > b ? a : b;
	//cout << "c = " << c << endl;

	//(a > b ? a : b) = 100;
	//cout << "b = " << b << endl;

	//cout << "a = " << a << endl;
	//cout << "b = " << b << endl;
	//cout << "c = " << c << endl;

	/*int score = 0;
	cout << "请给电影打分：" << endl;
	cin >> score;

	switch (score)
	{
	case 10:
	case 9:
		cout << "经典" << endl;
		break;
	case 8:
		cout << "非常好" << endl;
		break;
	case 7:
	case 6:
		cout << "一般" << endl;
		break;
	default:
		cout << "烂片" << endl;
		break;
	}*/

	//int num = 0;
	//while (num < 10)
	//{
	//	cout << "num = " << num << endl;
	//	num++;
	//}

	//int num = 0;
	//do
	//{
	//	cout << num << endl;
	//	num++;
	//} while (num < 10);

	//for (int i = 0; i < 10; i++)
	//{
	//	cout << "i = " << i << endl;
	//}
	//
	//for (int i = 0; i < 10; i++)
	//{
	//	for (int i = 0; i < 10; i++)
	//	{
	//		cout << "*" << " ";
	//	}
	//	cout << endl;
	//}

	//cout << "请选择你挑战的副本难度：" << endl;
	//cout << "1.普通" << endl;
	//cout << "2.困难" << endl;
	//cout << "3.修罗" << endl;

	//int num = 0;
	//cin >> num;
	//switch (num)
	//{
	//case 1:
	//	cout << "你选择的是普通难度" << endl;
	//	break;
	//case 2:
	//	cout << "你选择的是困难难度" << endl;
	//	break;
	//case 3:
	//	cout << "你选择的是修罗难度" << endl;
	//	break;
	//}

//for (int i = 0; i < 10; i++)
//{
//	if (i == 5)
//	{
//		break;
//	}
//	cout << i << endl;
//}
// 
//for (int i = 0; i < 10; i++)
//{
//	for (int i = 0; i < 10; i++)
//	{
//		if (i == 5)
//		{
//			break;
//		}
//		cout << "*" << " ";
//	}
//	cout << endl;
//}
//for (int i = 0; i < 100; i++)
//{
//	if (i % 2 == 0)
//	{
//		continue;
//	}
//	cout << i << endl;
//}
//cout << 7 % 2 << endl;

//cout << "1" << endl;
//goto FLAG;
//cout << "2" << endl;
//cout << "3" << endl;
//cout << "4" << endl;
//
//FLAG:
//cout << "5" << endl;

//int score[10];
//
//score[0] = 100;
//score[1] = 99;
//score[2] = 85;
//
//cout << score[0] << endl;
//cout << score[1] << endl;
//cout << score[2] << endl;
//cout << score[3] << endl;
//
//int score2[10] = { 100, 99, 88, 77, 66 };
//for (int i = 0; i < 10; i++)
//{
//	cout << score2[i] << endl;
//}
//int score3[] = { 1, 2, 3, 4, 5 };
//for (int i = 0; i < 5; i++)
//{
//	cout << score3[i] << endl;
//}
//	return 0;

	int kkk = 1;

	//cout << sizeof(arr) << endl;
	//cout << sizeof(arr[0]) << endl;
	//cout << sizeof(arr) / sizeof(arr[0]) << endl;
	//

	//cout << (int)arr << endl;
	//cout << (int)&arr[0] << endl;
	//cout << (int)&arr[1] << endl;
	//cout << (int)&arr[2] << endl;
	//int arr[9] = { 4,2,8,0,5,7,1,3,9 };
	//for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
	//{
	//	cout << arr[i] << " ";
	//}
	//cout << endl;
	//for (int i = 0; i < sizeof(arr)/sizeof(arr[0])-1; i++)
	//{
	//	for (int j = 0; j < sizeof(arr) / sizeof(arr[0]) - 1-i; j++)
	//	{
	//		if (arr[j] > arr[j+1])
	//		{
	//			int temp = arr[j];
	//			arr[j] = arr[j + 1];
	//			arr[j + 1] = temp;
	//		}
	//	}
	//}
	//for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
	//{
	//	cout << arr[i] << " ";
	//}
	//cout << endl;

	//int arr2[2][3] =
	//{
	//	{1,2,3},
	//    {4,5,6}
	//};
	//for (int i = 0; i < 2; i++)
	//{
	//	for (int j = 0; j < 3; j++)
	//	{
	//		cout << arr2[i][j] << " ";
	//	}
	//	cout << endl;
	//}

	//cout << sizeof(arr2) << " " << sizeof(arr2[0]) << " " << sizeof(arr2[0][0]) << " "
	//	<< sizeof(arr2) / sizeof(arr2[0]) << " "
	//	<< sizeof(arr2[0]) / sizeof(arr2[1][1]) << endl ;

	//cout << (int)&arr2 << endl;
	//cout << (int)arr2 << endl;
	//cout << (int)&arr2[0] << endl;
	//cout << (int)&arr2[0][0] << endl;
	//cout << (int)&arr2[0][1] << endl;
	//cout << (int)&arr2[1] << endl;

	int scores[3][3] =
	{
		{100,100,100},
		{66,77,88},
		{0,43,67}
	};
	
	string names[3] = { "张三","李四","王五" };
	for (int i = 0; i < 3; i++)
	{
		int sum = 0;
		for (int j = 0; j < 3; j++)
		{
			sum += scores[i][j];
		}
		cout << names[i] << "同学总成绩为：" << sum << "分" << endl;
	}




	return 0;

}