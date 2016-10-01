#include "header.h"

void toggleOrientation(char *orientation)
{
	if (*orientation == 'h')
	{
		*orientation = 'v';
	}
	else
	{
		*orientation = 'h';
	}

	return;
}