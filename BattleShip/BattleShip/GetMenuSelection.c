#include "header.h"

char getMenuSelection(void)
{
	char input = '\0';
	int isError = 0;

	while (input < '1' || input > '5')
	{
		if (isError)
		{
			//printf("\t\t\tSorry, that selection does not exist. Please enter another.\n");
		}

		input = getch();

		if (input < '1' || input > '5')
		{
			isError = 1;
		}
	}

	return input;
}