#include "game.h"

int main()
{
	int input = 0;
	do
	{
		menu(); 
		scanf("%d", &input);


		playgame();
	} while (input);

	return 0;
}