#include "header.h"

void copyBoard(char boardFrom[][size], char boardTo[][size])
{
	int i = 0, j = 0;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			boardTo[i][j] = boardFrom[i][j];
		}
	}
}