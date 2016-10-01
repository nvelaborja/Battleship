#include "header.h"

void updateBoard(int P1orP2, char board[][size], int *P1_CA_X, int *P1_CA_Y, int *P1_CR_X, int *P1_CR_Y, int *P1_BS_X, int *P1_BS_Y, int *P1_SB_X, int *P1_SB_Y, int *P1_DS_X, int *P1_DS_Y,
	int *P2_CA_X, int *P2_CA_Y, int *P2_CR_X, int *P2_CR_Y, int *P2_BS_X, int *P2_BS_Y, int *P2_SB_X, int *P2_SB_Y, int *P2_DS_X, int *P2_DS_Y,
	char *P1_CA_O, char *P1_CR_O, char *P1_BS_O, char *P1_SB_O, char *P1_DS_O,
	char *P2_CA_O, char *P2_CR_O, char *P2_BS_O, char *P2_SB_O, char *P2_DS_O)
{
	int i = 0, j = 0;

	if (P1orP2 == 1)
	{
		if (*P1_CA_X != -1)
		{
			if (*P1_CA_O == 'h')
			{
				board[*P1_CA_X + 0][*P1_CA_Y] = 'X';
				board[*P1_CA_X + 1][*P1_CA_Y] = 'X';
				board[*P1_CA_X + 2][*P1_CA_Y] = 'X';
				board[*P1_CA_X + 3][*P1_CA_Y] = 'X';
				board[*P1_CA_X + 4][*P1_CA_Y] = 'X';
			}
			else
			{
				board[*P1_CA_X][*P1_CA_Y + 0] = 'X';
				board[*P1_CA_X][*P1_CA_Y + 1] = 'X';
				board[*P1_CA_X][*P1_CA_Y + 2] = 'X';
				board[*P1_CA_X][*P1_CA_Y + 3] = 'X';
				board[*P1_CA_X][*P1_CA_Y + 4] = 'X';
			}
		}

		if (*P1_CR_X != -1)
		{
			if (*P1_CR_O == 'h')
			{
				board[*P1_CR_X + 0][*P1_CR_Y] = 'X';
				board[*P1_CR_X + 1][*P1_CR_Y] = 'X';
				board[*P1_CR_X + 2][*P1_CR_Y] = 'X';
			}
			else
			{
				board[*P1_CR_X][*P1_CR_Y + 0] = 'X';
				board[*P1_CR_X][*P1_CR_Y + 1] = 'X';
				board[*P1_CR_X][*P1_CR_Y + 2] = 'X';
			}
		}

		if (*P1_BS_X != -1)
		{
			if (*P1_BS_O == 'h')
			{
				board[*P1_BS_X + 0][*P1_BS_Y] = 'X';
				board[*P1_BS_X + 1][*P1_BS_Y] = 'X';
				board[*P1_BS_X + 2][*P1_BS_Y] = 'X';
				board[*P1_BS_X + 3][*P1_BS_Y] = 'X';
			}
			else
			{
				board[*P1_BS_X][*P1_BS_Y + 0] = 'X';
				board[*P1_BS_X][*P1_BS_Y + 1] = 'X';
				board[*P1_BS_X][*P1_BS_Y + 2] = 'X';
				board[*P1_BS_X][*P1_BS_Y + 3] = 'X';
			}
		}

		if (*P1_SB_X != -1)
		{
			if (*P1_SB_O == 'h')
			{
				board[*P1_SB_X + 0][*P1_SB_Y] = 'X';
				board[*P1_SB_X + 1][*P1_SB_Y] = 'X';
				board[*P1_SB_X + 2][*P1_SB_Y] = 'X';
			}
			else
			{
				board[*P1_SB_X][*P1_SB_Y + 0] = 'X';
				board[*P1_SB_X][*P1_SB_Y + 1] = 'X';
				board[*P1_SB_X][*P1_SB_Y + 2] = 'X';
			}
		}

		if (*P1_DS_X != -1)
		{
			if (*P1_DS_O == 'h')
			{
				board[*P1_DS_X + 0][*P1_DS_Y] = 'X';
				board[*P1_DS_X + 1][*P1_DS_Y] = 'X';
			}
			else
			{
				board[*P1_DS_X][*P1_DS_Y + 0] = 'X';
				board[*P1_DS_X][*P1_DS_Y + 1] = 'X';
			}
		}
	}
	else if (P1orP2 == 2)
	{
		if (*P2_CA_X != -1)
		{
			if (*P2_CA_O == 'h')
			{
				board[*P2_CA_X + 0][*P2_CA_Y] = 'X';
				board[*P2_CA_X + 1][*P2_CA_Y] = 'X';
				board[*P2_CA_X + 2][*P2_CA_Y] = 'X';
				board[*P2_CA_X + 3][*P2_CA_Y] = 'X';
				board[*P2_CA_X + 4][*P2_CA_Y] = 'X';
			}
			else
			{
				board[*P2_CA_X][*P2_CA_Y + 0] = 'X';
				board[*P2_CA_X][*P2_CA_Y + 1] = 'X';
				board[*P2_CA_X][*P2_CA_Y + 2] = 'X';
				board[*P2_CA_X][*P2_CA_Y + 3] = 'X';
				board[*P2_CA_X][*P2_CA_Y + 4] = 'X';
			}
		}

		if (*P2_CR_X != -1)
		{
			if (*P2_CR_O == 'h')
			{
				board[*P2_CR_X + 0][*P2_CR_Y] = 'X';
				board[*P2_CR_X + 1][*P2_CR_Y] = 'X';
				board[*P2_CR_X + 2][*P2_CR_Y] = 'X';
			}
			else
			{
				board[*P2_CR_X][*P2_CR_Y + 0] = 'X';
				board[*P2_CR_X][*P2_CR_Y + 1] = 'X';
				board[*P2_CR_X][*P2_CR_Y + 2] = 'X';
			}
		}

		if (*P2_BS_X != -1)
		{
			if (*P2_BS_O == 'h')
			{
				board[*P2_BS_X + 0][*P2_BS_Y] = 'X';
				board[*P2_BS_X + 1][*P2_BS_Y] = 'X';
				board[*P2_BS_X + 2][*P2_BS_Y] = 'X';
				board[*P2_BS_X + 3][*P2_BS_Y] = 'X';
			}
			else
			{
				board[*P2_BS_X][*P2_BS_Y + 0] = 'X';
				board[*P2_BS_X][*P2_BS_Y + 1] = 'X';
				board[*P2_BS_X][*P2_BS_Y + 2] = 'X';
				board[*P2_BS_X][*P2_BS_Y + 3] = 'X';
			}
		}

		if (*P2_SB_X != -1)
		{
			if (*P2_SB_O == 'h')
			{
				board[*P2_SB_X + 0][*P2_SB_Y] = 'X';
				board[*P2_SB_X + 1][*P2_SB_Y] = 'X';
				board[*P2_SB_X + 2][*P2_SB_Y] = 'X';
			}
			else
			{
				board[*P2_SB_X][*P2_SB_Y + 0] = 'X';
				board[*P2_SB_X][*P2_SB_Y + 1] = 'X';
				board[*P2_SB_X][*P2_SB_Y + 2] = 'X';
			}
		}

		if (*P2_DS_X != -1)
		{
			if (*P2_DS_O == 'h')
			{
				board[*P2_DS_X + 0][*P2_DS_Y] = 'X';
				board[*P2_DS_X + 1][*P2_DS_Y] = 'X';
			}
			else
			{
				board[*P2_DS_X][*P2_DS_Y + 0] = 'X';
				board[*P2_DS_X][*P2_DS_Y + 1] = 'X';
			}
		}
	}
	else if (P1orP2 == 3)
	{
		board[*P1_DS_X][*P1_DS_Y + 0] = '@';
	}
	else if (P1orP2 == 4)
	{
		board[*P2_DS_X][*P2_DS_Y + 0] = '@';
	}

	return;
}
