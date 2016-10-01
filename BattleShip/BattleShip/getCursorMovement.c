#include "header.h"

void getCursorMovement(int *cursor_x, int *cursor_y, char *input, char *orientation)
{
	char user_input = '\0';

	while (user_input != 'w' && user_input != 'a' && user_input != 's' && user_input != 'd' && user_input != ' ' && user_input != 'r')
	{
		user_input = getch();
	}

	if (user_input == 'a')
	{
		*cursor_y = *cursor_y - 1;
	}
	else if (user_input == 'w')
	{
		*cursor_x = *cursor_x - 1;
	}
	else if (user_input == 'd')
	{
		*cursor_y = *cursor_y + 1;
	}
	else if (user_input == 's')
	{
		*cursor_x = *cursor_x + 1;
	}
	else if (user_input == ' ')
	{
		*input = ' ';
	}
	else if (user_input == 'r')
	{
		toggleOrientation(orientation);
	}

	if (*cursor_x < 0)
	{
		*cursor_x = 0;
	}
	else if (*cursor_x > 9)
	{
		*cursor_x = 9;
	}

	if (*cursor_y < 0)
	{
		*cursor_y = 0;
	}
	else if (*cursor_y > 9)
	{
		*cursor_y = 9;
	}

}