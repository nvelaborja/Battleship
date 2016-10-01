#include "header.h"

void printBoard(char board[][size])
{
	int i = 0, j = 0;

	for (i = 0; i < size - 5; i++)
	{
		printf("\t\t\t\t\t\t");
		for (j = 0; j < size - 5; j++)
		{
			printf("%c     ", board[i][j]);
		}
		printf("\n\n\n");
	}

	return;
}