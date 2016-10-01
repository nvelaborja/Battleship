#include "header.h"

void initBoard(char board[][size])
{
	int i = 0, j = 0;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			board[i][j] = '~';
		}
	}

	return;
}