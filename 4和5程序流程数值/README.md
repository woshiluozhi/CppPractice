# 程序流程，数组

## 1

for (int i = 0; i < 3; i++)
	{
		int sum = 0;
		for (int j = 0; j < 3; j++)
		{
			sum += scores[i][j];
		}
		cout << names[i] << "同学总成绩为：" << sum << "分" << endl;
	}



int sum = 0在循环内重复为0！


