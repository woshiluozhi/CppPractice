#include <stdio.h>

int main()
{
	int day = 0;
	scanf_s("%d", &day);
	switch (day)
	{
	case 1:
		printf("Monday");
		break;
	case 2:
		printf("Tuesday");
		break;
	case 3:
		printf("Thursday");
		break;
	case 4:
		printf("Wednesday");
		break;
	case 5:
		printf("Friday");
		break;
	case 6:
		printf("Satursay");
		break;
	case 7:
		printf("Sunday");
		break;
	default:
		break;
	}

	return 0;
}