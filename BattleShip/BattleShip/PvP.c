#include "header.h"

void PvP(void)
{
	// Cursors
	int P1_Cursor_X = 0, P1_Cursor_Y = 0, P2_Cursor_X = 0, P2_Cursor_Y = 0;
	// P1 Ship Coordinates
	int P1_CA_X = -1, P1_CA_Y = -1, P1_CR_X = -1, P1_CR_Y = -1, P1_BS_X = -1, P1_BS_Y = -1, P1_SB_X = -1, P1_SB_Y = -1, P1_DS_X = -1, P1_DS_Y = -1;
	// P2 Ship Coordinates
	int P2_CA_X = -1, P2_CA_Y = -1, P2_CR_X = -1, P2_CR_Y = -1, P2_BS_X = -1, P2_BS_Y = -1, P2_SB_X = -1, P2_SB_Y = -1, P2_DS_X = -1, P2_DS_Y = -1;
	// P1 Ship Orientation
	char P1_CA_O = 'h', P1_CR_O = 'h', P1_BS_O = 'h', P1_SB_O = 'h', P1_DS_O = 'h';
	// P2 Ship Orientation
	char P2_CA_O = 'h', P2_CR_O = 'h', P2_BS_O = 'h', P2_SB_O = 'h', P2_DS_O = 'h';
	// Boards
	char P1_Ship_Board[size][size], P1_Guess_Board[size][size], P2_Ship_Board[size][size], P2_Guess_Board[size][size], blankBoard[size][size];
	// Names
	char P1_Name[50], P2_Name[50], Ship_Names[5][10] = { "Carrier", "Battleship", "Cruiser", "Submarine", "Destroyer" };
	// Iterators
	int shipsPlaced = 0, P1_Hits = 0, P2_Hits = 0, isGameOver = 0, hasShot = 0;

	char input = '\0';

	printf("\n");
	printf("******************************************************************************************************************************************************");
	Sleep(50);
	printf("******************************************************************************************************************************************************");
	Sleep(50);
	printf("******************************************************************************************************************************************************");
	Sleep(50);
	printf("******************************************************************************************************************************************************");
	Sleep(50);
	printf("******************************************************************************************************************************************************");
	Sleep(50);
	printf("******************************************************************************************************************************************************");
	Sleep(50);
	printf("******************************************************************************************************************************************************");
	Sleep(50);
	printf("******************************************************************************************************************************************************");
	Sleep(50);
	printf("******************************************************************************************************************************************************");
	Sleep(50);
	printf("******************************************************************************************************************************************************");
	Sleep(50);
	printf("******************************************************************************************************************************************************");
	Sleep(50);
	printf("******************************************************************************************************************************************************");
	Sleep(50);
	printf("******************************************************************************************************************************************************");
	Sleep(50);
	printf("******************************************************************************************************************************************************");
	Sleep(50);
	printf("******************************************************************************************************************************************************");
	Sleep(50);
	printf("******************************************************************************************************************************************************");
	Sleep(50);
	printf("******************************************************************************************************************************************************");
	Sleep(50);
	printf("******************************************************************************************************************************************************");
	Sleep(50);
	printf("******************************************************************************************************************************************************");
	Sleep(50);
	printf("******************************************************************************************************************************************************");
	Sleep(50);
	printf("******************************************************************************************************************************************************");
	Sleep(50);
	printf("******************************************************************************************************************************************************");
	Sleep(50);
	printf("******************************************************************************************************************************************************");
	Sleep(50);
	printf("******************************************************************************************************************************************************");
	Sleep(50);
	printf("******************************************************************************************************************************************************");
	Sleep(50);
	printf("******************************************************************************************************************************************************");
	Sleep(50);
	printf("******************************************************************************************************************************************************");
	Sleep(50);
	printf("****************                                                                                                                  ********************");
	Sleep(50);
	printf("****************                                                    ~ P v P ~                                                     ********************");
	Sleep(50);
	printf("****************                                                                                                                  ********************");
	Sleep(50);
	printf("****************                                                                                                                  ********************");
	Sleep(50);
	printf("****************                                                                                                                  ********************");
	Sleep(50);
	printf("****************                                                                                                                  ********************");
	Sleep(50);
	printf("****************                                                                                                                  ********************");
	Sleep(50);
	printf("****************                                                                                                                  ********************");
	Sleep(50);
	printf("****************                                     You have selected Player vs. Player Mode                                     ********************");
	Sleep(50);
	printf("****************                                                                                                                  ********************");
	Sleep(50);
	printf("****************                                                                                                                  ********************");
	Sleep(50);
	printf("****************                                                                                                                  ********************");
	Sleep(50);
	printf("****************                                                                                                                  ********************");
	Sleep(50);
	printf("****************                                                                                                                  ********************");
	Sleep(50);
	printf("****************                                                                                                                  ********************");
	Sleep(50);
	printf("****************                                                                                                                  ********************");
	Sleep(50);
	printf("****************                                                                                                                  ********************");
	Sleep(50);
	printf("******************************************************************************************************************************************************");
	Sleep(50);
	printf("******************************************************************************************************************************************************");
	Sleep(50);
	printf("******************************************************************************************************************************************************");
	Sleep(50);
	printf("******************************************************************************************************************************************************");
	Sleep(50);
	printf("******************************************************************************************************************************************************");
	Sleep(50);
	printf("******************************************************************************************************************************************************");
	Sleep(50);
	printf("******************************************************************************************************************************************************");
	Sleep(50);
	printf("******************************************************************************************************************************************************");
	Sleep(50);
	printf("******************************************************************************************************************************************************");
	Sleep(50);
	printf("******************************************************************************************************************************************************");
	Sleep(50);
	printf("******************************************************************************************************************************************************");
	Sleep(50);
	printf("******************************************************************************************************************************************************");
	Sleep(50);
	printf("******************************************************************************************************************************************************");
	Sleep(50);
	printf("******************************************************************************************************************************************************");
	Sleep(50);
	printf("******************************************************************************************************************************************************");
	Sleep(50);
	printf("******************************************************************************************************************************************************");
	Sleep(50);
	printf("******************************************************************************************************************************************************");
	Sleep(50);
	printf("******************************************************************************************************************************************************");
	Sleep(50);
	printf("******************************************************************************************************************************************************");
	Sleep(50);
	printf("******************************************************************************************************************************************************");
	Sleep(50);
	printf("******************************************************************************************************************************************************");
	Sleep(50);
	printf("******************************************************************************************************************************************************");
	Sleep(50);
	printf("******************************************************************************************************************************************************");
	Sleep(50);
	printf("******************************************************************************************************************************************************");
	Sleep(50);
	printf("******************************************************************************************************************************************************");
	Sleep(50);
	printf("******************************************************************************************************************************************************");
	Sleep(3000);

	system("cls");

	initBoard(P1_Ship_Board);
	initBoard(P1_Guess_Board);
	initBoard(P2_Ship_Board);
	initBoard(P2_Guess_Board);
	initBoard(blankBoard);

	// Player One Ship Placements

	displayBanner();
	printf("\t\t\t\t\t\tPlayer 1! Give yourself a better name: ");
	scanf("%s", &P1_Name);

	printf("\n\t\t\t\tThanks %s. Get Player 2 out of here, it's time to give your ships their coordinates!\n\n\t\t\t\t\t\t\t\t", P1_Name);
	system("pause");
	system("cls");

	shipsPlaced = 0;
	while (shipsPlaced < 5)
	{
		system("cls");
		displayBanner();

		printf("\t\tWhere would you like to put your %s? Use WASD to navigate, press SPACE to finalize position or R to rotate.\n\n\n", Ship_Names[shipsPlaced]);
		input = '\0';

		if (shipsPlaced == 0)
		{
			if (P1_CA_O == 'h')
			{
				blankBoard[P1_Cursor_X + 0][P1_Cursor_Y] = 'X';
				blankBoard[P1_Cursor_X + 1][P1_Cursor_Y] = 'X';
				blankBoard[P1_Cursor_X + 2][P1_Cursor_Y] = 'X';
				blankBoard[P1_Cursor_X + 3][P1_Cursor_Y] = 'X';
				blankBoard[P1_Cursor_X + 4][P1_Cursor_Y] = 'X';
			}
			else
			{
				blankBoard[P1_Cursor_X][P1_Cursor_Y + 0] = 'X';
				blankBoard[P1_Cursor_X][P1_Cursor_Y + 1] = 'X';
				blankBoard[P1_Cursor_X][P1_Cursor_Y + 2] = 'X';
				blankBoard[P1_Cursor_X][P1_Cursor_Y + 3] = 'X';
				blankBoard[P1_Cursor_X][P1_Cursor_Y + 4] = 'X';
			}
			printBoard(blankBoard);
			updateBoard(1, blankBoard, &P1_CA_X, &P1_CA_Y, &P1_CR_X, &P1_CR_Y, &P1_BS_X, &P1_BS_Y, &P1_SB_X, &P1_SB_Y, &P1_DS_X, &P1_DS_Y,
				&P2_CA_X, &P2_CA_Y, &P2_CR_X, &P2_CR_Y, &P2_BS_X, &P2_BS_Y, &P2_SB_X, &P2_SB_Y, &P2_DS_X, &P2_DS_Y,
				&P1_CA_O, &P1_CR_O, &P1_BS_O, &P1_SB_O, &P1_DS_O,
				&P2_CA_O, &P2_CR_O, &P2_BS_O, &P2_SB_O, &P2_DS_O);
			getCursorMovement(&P1_Cursor_X, &P1_Cursor_Y, &input, &P1_CA_O);
			copyBoard(P1_Ship_Board, blankBoard);
			if (P1_Cursor_X > 5 && P1_CA_O == 'h')
			{
				P1_Cursor_X = 5;
			}
			else if (P1_Cursor_Y > 5 && P1_CA_O == 'v')
			{
				P1_Cursor_Y = 5;
			}

		}
		else if (shipsPlaced == 1)
		{
			if (P1_BS_O == 'h')
			{
				blankBoard[P1_Cursor_X + 0][P1_Cursor_Y] = 'X';
				blankBoard[P1_Cursor_X + 1][P1_Cursor_Y] = 'X';
				blankBoard[P1_Cursor_X + 2][P1_Cursor_Y] = 'X';
				blankBoard[P1_Cursor_X + 3][P1_Cursor_Y] = 'X';
			}
			else
			{
				blankBoard[P1_Cursor_X][P1_Cursor_Y + 0] = 'X';
				blankBoard[P1_Cursor_X][P1_Cursor_Y + 1] = 'X';
				blankBoard[P1_Cursor_X][P1_Cursor_Y + 2] = 'X';
				blankBoard[P1_Cursor_X][P1_Cursor_Y + 3] = 'X';
			}
			printBoard(blankBoard);
			updateBoard(1, blankBoard, &P1_CA_X, &P1_CA_Y, &P1_CR_X, &P1_CR_Y, &P1_BS_X, &P1_BS_Y, &P1_SB_X, &P1_SB_Y, &P1_DS_X, &P1_DS_Y,
				&P2_CA_X, &P2_CA_Y, &P2_CR_X, &P2_CR_Y, &P2_BS_X, &P2_BS_Y, &P2_SB_X, &P2_SB_Y, &P2_DS_X, &P2_DS_Y,
				&P1_CA_O, &P1_CR_O, &P1_BS_O, &P1_SB_O, &P1_DS_O,
				&P2_CA_O, &P2_CR_O, &P2_BS_O, &P2_SB_O, &P2_DS_O);
			getCursorMovement(&P1_Cursor_X, &P1_Cursor_Y, &input, &P1_BS_O);
			copyBoard(P1_Ship_Board, blankBoard);
			if (P1_Cursor_X > 6 && P1_BS_O == 'h')
			{
				P1_Cursor_X = 6;
			}
			else if (P1_Cursor_Y > 6 && P1_BS_O == 'v')
			{
				P1_Cursor_Y = 6;
			}

		}
		else if (shipsPlaced == 2)
		{
			if (P1_CR_O == 'h')
			{
				blankBoard[P1_Cursor_X + 0][P1_Cursor_Y] = 'X';
				blankBoard[P1_Cursor_X + 1][P1_Cursor_Y] = 'X';
				blankBoard[P1_Cursor_X + 2][P1_Cursor_Y] = 'X';
			}
			else
			{
				blankBoard[P1_Cursor_X][P1_Cursor_Y + 0] = 'X';
				blankBoard[P1_Cursor_X][P1_Cursor_Y + 1] = 'X';
				blankBoard[P1_Cursor_X][P1_Cursor_Y + 2] = 'X';
			}
			printBoard(blankBoard);
			updateBoard(1, blankBoard, &P1_CA_X, &P1_CA_Y, &P1_CR_X, &P1_CR_Y, &P1_BS_X, &P1_BS_Y, &P1_SB_X, &P1_SB_Y, &P1_DS_X, &P1_DS_Y,
				&P2_CA_X, &P2_CA_Y, &P2_CR_X, &P2_CR_Y, &P2_BS_X, &P2_BS_Y, &P2_SB_X, &P2_SB_Y, &P2_DS_X, &P2_DS_Y,
				&P1_CA_O, &P1_CR_O, &P1_BS_O, &P1_SB_O, &P1_DS_O,
				&P2_CA_O, &P2_CR_O, &P2_BS_O, &P2_SB_O, &P2_DS_O);
			getCursorMovement(&P1_Cursor_X, &P1_Cursor_Y, &input, &P1_CR_O);
			copyBoard(P1_Ship_Board, blankBoard);
			if (P1_Cursor_X > 7 && P1_CR_O == 'h')
			{
				P1_Cursor_X = 7;
			}
			else if (P1_Cursor_Y > 7 && P1_CR_O == 'v')
			{
				P1_Cursor_Y = 7;
			}
		}
		else if (shipsPlaced == 3)
		{
			if (P1_SB_O == 'h')
			{
				blankBoard[P1_Cursor_X + 0][P1_Cursor_Y] = 'X';
				blankBoard[P1_Cursor_X + 1][P1_Cursor_Y] = 'X';
				blankBoard[P1_Cursor_X + 2][P1_Cursor_Y] = 'X';
			}
			else
			{
				blankBoard[P1_Cursor_X][P1_Cursor_Y + 0] = 'X';
				blankBoard[P1_Cursor_X][P1_Cursor_Y + 1] = 'X';
				blankBoard[P1_Cursor_X][P1_Cursor_Y + 2] = 'X';
			}
			printBoard(blankBoard);
			updateBoard(1, blankBoard, &P1_CA_X, &P1_CA_Y, &P1_CR_X, &P1_CR_Y, &P1_BS_X, &P1_BS_Y, &P1_SB_X, &P1_SB_Y, &P1_DS_X, &P1_DS_Y,
				&P2_CA_X, &P2_CA_Y, &P2_CR_X, &P2_CR_Y, &P2_BS_X, &P2_BS_Y, &P2_SB_X, &P2_SB_Y, &P2_DS_X, &P2_DS_Y,
				&P1_CA_O, &P1_CR_O, &P1_BS_O, &P1_SB_O, &P1_DS_O,
				&P2_CA_O, &P2_CR_O, &P2_BS_O, &P2_SB_O, &P2_DS_O);
			getCursorMovement(&P1_Cursor_X, &P1_Cursor_Y, &input, &P1_SB_O);
			copyBoard(P1_Ship_Board, blankBoard);

			if (P1_Cursor_X > 7 && P1_SB_O == 'h')
			{
				P1_Cursor_X = 7;
			}
			else if (P1_Cursor_Y > 7 && P1_SB_O == 'v')
			{
				P1_Cursor_Y = 7;
			}
		}
		else if (shipsPlaced == 4)
		{
			if (P1_DS_O == 'h')
			{
				blankBoard[P1_Cursor_X + 0][P1_Cursor_Y] = 'X';
				blankBoard[P1_Cursor_X + 1][P1_Cursor_Y] = 'X';
			}
			else
			{
				blankBoard[P1_Cursor_X][P1_Cursor_Y + 0] = 'X';
				blankBoard[P1_Cursor_X][P1_Cursor_Y + 1] = 'X';
			}
			printBoard(blankBoard);
			updateBoard(1, blankBoard, &P1_CA_X, &P1_CA_Y, &P1_CR_X, &P1_CR_Y, &P1_BS_X, &P1_BS_Y, &P1_SB_X, &P1_SB_Y, &P1_DS_X, &P1_DS_Y,
				&P2_CA_X, &P2_CA_Y, &P2_CR_X, &P2_CR_Y, &P2_BS_X, &P2_BS_Y, &P2_SB_X, &P2_SB_Y, &P2_DS_X, &P2_DS_Y,
				&P1_CA_O, &P1_CR_O, &P1_BS_O, &P1_SB_O, &P1_DS_O,
				&P2_CA_O, &P2_CR_O, &P2_BS_O, &P2_SB_O, &P2_DS_O);
			getCursorMovement(&P1_Cursor_X, &P1_Cursor_Y, &input, &P1_DS_O);
			copyBoard(P1_Ship_Board, blankBoard);

			if (P1_Cursor_X > 8 && P1_DS_O == 'h')
			{
				P1_Cursor_X = 8;
			}
			else if (P1_Cursor_Y > 8 && P1_DS_O == 'v')
			{
				P1_Cursor_Y = 8;
			}
		}

		if (input == ' ')
		{
			if (shipsPlaced == 0)
			{
				if (P1_CA_O == 'h')
				{
					P1_Ship_Board[P1_Cursor_X + 0][P1_Cursor_Y] = 'X';
					P1_Ship_Board[P1_Cursor_X + 1][P1_Cursor_Y] = 'X';
					P1_Ship_Board[P1_Cursor_X + 2][P1_Cursor_Y] = 'X';
					P1_Ship_Board[P1_Cursor_X + 3][P1_Cursor_Y] = 'X';
					P1_Ship_Board[P1_Cursor_X + 4][P1_Cursor_Y] = 'X';
				}
				else
				{
					P1_Ship_Board[P1_Cursor_X][P1_Cursor_Y + 0] = 'X';
					P1_Ship_Board[P1_Cursor_X][P1_Cursor_Y + 1] = 'X';
					P1_Ship_Board[P1_Cursor_X][P1_Cursor_Y + 2] = 'X';
					P1_Ship_Board[P1_Cursor_X][P1_Cursor_Y + 3] = 'X';
					P1_Ship_Board[P1_Cursor_X][P1_Cursor_Y + 4] = 'X';
				}
			}
			else if (shipsPlaced == 1)
			{
				if (P1_BS_O == 'h')
				{
					P1_Ship_Board[P1_Cursor_X + 0][P1_Cursor_Y] = 'X';
					P1_Ship_Board[P1_Cursor_X + 1][P1_Cursor_Y] = 'X';
					P1_Ship_Board[P1_Cursor_X + 2][P1_Cursor_Y] = 'X';
					P1_Ship_Board[P1_Cursor_X + 3][P1_Cursor_Y] = 'X';
				}
				else
				{
					P1_Ship_Board[P1_Cursor_X][P1_Cursor_Y + 0] = 'X';
					P1_Ship_Board[P1_Cursor_X][P1_Cursor_Y + 1] = 'X';
					P1_Ship_Board[P1_Cursor_X][P1_Cursor_Y + 2] = 'X';
					P1_Ship_Board[P1_Cursor_X][P1_Cursor_Y + 3] = 'X';
				}
			}
			else if (shipsPlaced == 2)
			{
				if (P1_CR_O == 'h')
				{
					P1_Ship_Board[P1_Cursor_X + 0][P1_Cursor_Y] = 'X';
					P1_Ship_Board[P1_Cursor_X + 1][P1_Cursor_Y] = 'X';
					P1_Ship_Board[P1_Cursor_X + 2][P1_Cursor_Y] = 'X';
				}
				else
				{
					P1_Ship_Board[P1_Cursor_X][P1_Cursor_Y + 0] = 'X';
					P1_Ship_Board[P1_Cursor_X][P1_Cursor_Y + 1] = 'X';
					P1_Ship_Board[P1_Cursor_X][P1_Cursor_Y + 2] = 'X';
				}
			}
			else if (shipsPlaced == 3)
			{
				if (P1_CR_O == 'h')
				{
					P1_Ship_Board[P1_Cursor_X + 0][P1_Cursor_Y] = 'X';
					P1_Ship_Board[P1_Cursor_X + 1][P1_Cursor_Y] = 'X';
					P1_Ship_Board[P1_Cursor_X + 2][P1_Cursor_Y] = 'X';
				}
				else
				{
					P1_Ship_Board[P1_Cursor_X][P1_Cursor_Y + 0] = 'X';
					P1_Ship_Board[P1_Cursor_X][P1_Cursor_Y + 1] = 'X';
					P1_Ship_Board[P1_Cursor_X][P1_Cursor_Y + 2] = 'X';
				}
			}
			else if (shipsPlaced == 4)
			{
				if (P1_DS_O == 'h')
				{
					P1_Ship_Board[P1_Cursor_X + 0][P1_Cursor_Y] = 'X';
					P1_Ship_Board[P1_Cursor_X + 1][P1_Cursor_Y] = 'X';
				}
				else
				{
					P1_Ship_Board[P1_Cursor_X][P1_Cursor_Y + 0] = 'X';
					P1_Ship_Board[P1_Cursor_X][P1_Cursor_Y + 1] = 'X';
				}
			}
			shipsPlaced++;
			P1_Cursor_X = 0;
			P1_Cursor_Y = 0;
			input = '\0';
		}

	}

	system("cls");
	displayBanner();
	printf("\t\t\t\t\t\t\tHere's your board, remember it well!\n\n\n");
	printBoard(P1_Ship_Board);
	system("pause");
	input = '\0';

	// Player 2 Ship Placements

	system("cls");
	displayBanner();
	printf("\t\t\t\t\t\tPlayer 2! Give yourself a better name: ");
	scanf("%s", &P2_Name);

	printf("\n\t\t\t\tThanks %s. Get %s out of here, it's time to give your ships their coordinates!\n\n\t\t\t\t\t\t\t\t", P2_Name, P1_Name);
	system("pause");
	system("cls");

	initBoard(blankBoard);

	shipsPlaced = 0;
	while (shipsPlaced < 5)
	{
		system("cls");
		displayBanner();

		printf("\t\tWhere would you like to put your %s? Use WASD to navigate, press SPACE to finalize position or R to rotate.\n\n\n", Ship_Names[shipsPlaced]);
		input = '\0';

		if (shipsPlaced == 0)
		{
			if (P2_CA_O == 'h')
			{
				blankBoard[P2_Cursor_X + 0][P2_Cursor_Y] = 'X';
				blankBoard[P2_Cursor_X + 1][P2_Cursor_Y] = 'X';
				blankBoard[P2_Cursor_X + 2][P2_Cursor_Y] = 'X';
				blankBoard[P2_Cursor_X + 3][P2_Cursor_Y] = 'X';
				blankBoard[P2_Cursor_X + 4][P2_Cursor_Y] = 'X';
			}
			else
			{
				blankBoard[P2_Cursor_X][P2_Cursor_Y + 0] = 'X';
				blankBoard[P2_Cursor_X][P2_Cursor_Y + 1] = 'X';
				blankBoard[P2_Cursor_X][P2_Cursor_Y + 2] = 'X';
				blankBoard[P2_Cursor_X][P2_Cursor_Y + 3] = 'X';
				blankBoard[P2_Cursor_X][P2_Cursor_Y + 4] = 'X';
			}
			printBoard(blankBoard);
			updateBoard(2, blankBoard, &P1_CA_X, &P1_CA_Y, &P1_CR_X, &P1_CR_Y, &P1_BS_X, &P1_BS_Y, &P1_SB_X, &P1_SB_Y, &P1_DS_X, &P1_DS_Y,
				&P2_CA_X, &P2_CA_Y, &P2_CR_X, &P2_CR_Y, &P2_BS_X, &P2_BS_Y, &P2_SB_X, &P2_SB_Y, &P2_DS_X, &P2_DS_Y,
				&P1_CA_O, &P1_CR_O, &P1_BS_O, &P1_SB_O, &P1_DS_O,
				&P2_CA_O, &P2_CR_O, &P2_BS_O, &P2_SB_O, &P2_DS_O);
			getCursorMovement(&P2_Cursor_X, &P2_Cursor_Y, &input, &P2_CA_O);
			copyBoard(P2_Ship_Board, blankBoard);
			if (P2_Cursor_X > 5 && P2_CA_O == 'h')
			{
				P2_Cursor_X = 5;
			}
			else if (P2_Cursor_Y > 5 && P2_CA_O == 'v')
			{
				P2_Cursor_Y = 5;
			}

		}
		else if (shipsPlaced == 1)
		{
			if (P2_BS_O == 'h')
			{
				blankBoard[P2_Cursor_X + 0][P2_Cursor_Y] = 'X';
				blankBoard[P2_Cursor_X + 1][P2_Cursor_Y] = 'X';
				blankBoard[P2_Cursor_X + 2][P2_Cursor_Y] = 'X';
				blankBoard[P2_Cursor_X + 3][P2_Cursor_Y] = 'X';
			}
			else
			{
				blankBoard[P2_Cursor_X][P2_Cursor_Y + 0] = 'X';
				blankBoard[P2_Cursor_X][P2_Cursor_Y + 1] = 'X';
				blankBoard[P2_Cursor_X][P2_Cursor_Y + 2] = 'X';
				blankBoard[P2_Cursor_X][P2_Cursor_Y + 3] = 'X';
			}
			printBoard(blankBoard);
			updateBoard(2, blankBoard, &P1_CA_X, &P1_CA_Y, &P1_CR_X, &P1_CR_Y, &P1_BS_X, &P1_BS_Y, &P1_SB_X, &P1_SB_Y, &P1_DS_X, &P1_DS_Y,
				&P2_CA_X, &P2_CA_Y, &P2_CR_X, &P2_CR_Y, &P2_BS_X, &P2_BS_Y, &P2_SB_X, &P2_SB_Y, &P2_DS_X, &P2_DS_Y,
				&P1_CA_O, &P1_CR_O, &P1_BS_O, &P1_SB_O, &P1_DS_O,
				&P2_CA_O, &P2_CR_O, &P2_BS_O, &P2_SB_O, &P2_DS_O);
			getCursorMovement(&P2_Cursor_X, &P2_Cursor_Y, &input, &P2_BS_O);
			copyBoard(P2_Ship_Board, blankBoard);
			if (P2_Cursor_X > 6 && P2_BS_O == 'h')
			{
				P2_Cursor_X = 6;
			}
			else if (P2_Cursor_Y > 6 && P2_BS_O == 'v')
			{
				P2_Cursor_Y = 6;
			}

		}
		else if (shipsPlaced == 2)
		{
			if (P2_CR_O == 'h')
			{
				blankBoard[P2_Cursor_X + 0][P2_Cursor_Y] = 'X';
				blankBoard[P2_Cursor_X + 1][P2_Cursor_Y] = 'X';
				blankBoard[P2_Cursor_X + 2][P2_Cursor_Y] = 'X';
			}
			else
			{
				blankBoard[P2_Cursor_X][P2_Cursor_Y + 0] = 'X';
				blankBoard[P2_Cursor_X][P2_Cursor_Y + 1] = 'X';
				blankBoard[P2_Cursor_X][P2_Cursor_Y + 2] = 'X';
			}
			printBoard(blankBoard);
			updateBoard(2, blankBoard, &P1_CA_X, &P1_CA_Y, &P1_CR_X, &P1_CR_Y, &P1_BS_X, &P1_BS_Y, &P1_SB_X, &P1_SB_Y, &P1_DS_X, &P1_DS_Y,
				&P2_CA_X, &P2_CA_Y, &P2_CR_X, &P2_CR_Y, &P2_BS_X, &P2_BS_Y, &P2_SB_X, &P2_SB_Y, &P2_DS_X, &P2_DS_Y,
				&P1_CA_O, &P1_CR_O, &P1_BS_O, &P1_SB_O, &P1_DS_O,
				&P2_CA_O, &P2_CR_O, &P2_BS_O, &P2_SB_O, &P2_DS_O);
			getCursorMovement(&P2_Cursor_X, &P2_Cursor_Y, &input, &P2_CR_O);
			copyBoard(P2_Ship_Board, blankBoard);
			if (P2_Cursor_X > 7 && P2_CR_O == 'h')
			{
				P2_Cursor_X = 7;
			}
			else if (P2_Cursor_Y > 7 && P2_CR_O == 'v')
			{
				P2_Cursor_Y = 7;
			}
		}
		else if (shipsPlaced == 3)
		{
			if (P2_SB_O == 'h')
			{
				blankBoard[P2_Cursor_X + 0][P2_Cursor_Y] = 'X';
				blankBoard[P2_Cursor_X + 1][P2_Cursor_Y] = 'X';
				blankBoard[P2_Cursor_X + 2][P2_Cursor_Y] = 'X';
			}
			else
			{
				blankBoard[P2_Cursor_X][P2_Cursor_Y + 0] = 'X';
				blankBoard[P2_Cursor_X][P2_Cursor_Y + 1] = 'X';
				blankBoard[P2_Cursor_X][P2_Cursor_Y + 2] = 'X';
			}
			printBoard(blankBoard);
			updateBoard(2, blankBoard, &P1_CA_X, &P1_CA_Y, &P1_CR_X, &P1_CR_Y, &P1_BS_X, &P1_BS_Y, &P1_SB_X, &P1_SB_Y, &P1_DS_X, &P1_DS_Y,
				&P2_CA_X, &P2_CA_Y, &P2_CR_X, &P2_CR_Y, &P2_BS_X, &P2_BS_Y, &P2_SB_X, &P2_SB_Y, &P2_DS_X, &P2_DS_Y,
				&P1_CA_O, &P1_CR_O, &P1_BS_O, &P1_SB_O, &P1_DS_O,
				&P2_CA_O, &P2_CR_O, &P2_BS_O, &P2_SB_O, &P2_DS_O);
			getCursorMovement(&P2_Cursor_X, &P2_Cursor_Y, &input, &P2_SB_O);
			copyBoard(P2_Ship_Board, blankBoard);

			if (P2_Cursor_X > 7 && P2_SB_O == 'h')
			{
				P2_Cursor_X = 7;
			}
			else if (P2_Cursor_Y > 7 && P2_SB_O == 'v')
			{
				P2_Cursor_Y = 7;
			}
		}
		else if (shipsPlaced == 4)
		{
			if (P2_DS_O == 'h')
			{
				blankBoard[P2_Cursor_X + 0][P2_Cursor_Y] = 'X';
				blankBoard[P2_Cursor_X + 1][P2_Cursor_Y] = 'X';
			}
			else
			{
				blankBoard[P2_Cursor_X][P2_Cursor_Y + 0] = 'X';
				blankBoard[P2_Cursor_X][P2_Cursor_Y + 1] = 'X';
			}
			printBoard(blankBoard);
			updateBoard(2, blankBoard, &P1_CA_X, &P1_CA_Y, &P1_CR_X, &P1_CR_Y, &P1_BS_X, &P1_BS_Y, &P1_SB_X, &P1_SB_Y, &P1_DS_X, &P1_DS_Y,
				&P2_CA_X, &P2_CA_Y, &P2_CR_X, &P2_CR_Y, &P2_BS_X, &P2_BS_Y, &P2_SB_X, &P2_SB_Y, &P2_DS_X, &P2_DS_Y,
				&P1_CA_O, &P1_CR_O, &P1_BS_O, &P1_SB_O, &P1_DS_O,
				&P2_CA_O, &P2_CR_O, &P2_BS_O, &P2_SB_O, &P2_DS_O);
			getCursorMovement(&P2_Cursor_X, &P2_Cursor_Y, &input, &P2_DS_O);
			copyBoard(P2_Ship_Board, blankBoard);

			if (P2_Cursor_X > 8 && P2_DS_O == 'h')
			{
				P2_Cursor_X = 8;
			}
			else if (P2_Cursor_Y > 8 && P2_DS_O == 'v')
			{
				P2_Cursor_Y = 8;
			}
		}

		if (input == ' ')
		{
			if (shipsPlaced == 0)
			{
				if (P2_CA_O == 'h')
				{
					P2_Ship_Board[P2_Cursor_X + 0][P2_Cursor_Y] = 'X';
					P2_Ship_Board[P2_Cursor_X + 1][P2_Cursor_Y] = 'X';
					P2_Ship_Board[P2_Cursor_X + 2][P2_Cursor_Y] = 'X';
					P2_Ship_Board[P2_Cursor_X + 3][P2_Cursor_Y] = 'X';
					P2_Ship_Board[P2_Cursor_X + 4][P2_Cursor_Y] = 'X';
				}
				else
				{
					P2_Ship_Board[P2_Cursor_X][P2_Cursor_Y + 0] = 'X';
					P2_Ship_Board[P2_Cursor_X][P2_Cursor_Y + 1] = 'X';
					P2_Ship_Board[P2_Cursor_X][P2_Cursor_Y + 2] = 'X';
					P2_Ship_Board[P2_Cursor_X][P2_Cursor_Y + 3] = 'X';
					P2_Ship_Board[P2_Cursor_X][P2_Cursor_Y + 4] = 'X';
				}
			}
			else if (shipsPlaced == 1)
			{
				if (P2_BS_O == 'h')
				{
					P2_Ship_Board[P2_Cursor_X + 0][P2_Cursor_Y] = 'X';
					P2_Ship_Board[P2_Cursor_X + 1][P2_Cursor_Y] = 'X';
					P2_Ship_Board[P2_Cursor_X + 2][P2_Cursor_Y] = 'X';
					P2_Ship_Board[P2_Cursor_X + 3][P2_Cursor_Y] = 'X';
				}
				else
				{
					P2_Ship_Board[P2_Cursor_X][P2_Cursor_Y + 0] = 'X';
					P2_Ship_Board[P2_Cursor_X][P2_Cursor_Y + 1] = 'X';
					P2_Ship_Board[P2_Cursor_X][P2_Cursor_Y + 2] = 'X';
					P2_Ship_Board[P2_Cursor_X][P2_Cursor_Y + 3] = 'X';
				}
			}
			else if (shipsPlaced == 2)
			{
				if (P2_CR_O == 'h')
				{
					P2_Ship_Board[P2_Cursor_X + 0][P2_Cursor_Y] = 'X';
					P2_Ship_Board[P2_Cursor_X + 1][P2_Cursor_Y] = 'X';
					P2_Ship_Board[P2_Cursor_X + 2][P2_Cursor_Y] = 'X';
				}
				else
				{
					P2_Ship_Board[P2_Cursor_X][P2_Cursor_Y + 0] = 'X';
					P2_Ship_Board[P2_Cursor_X][P2_Cursor_Y + 1] = 'X';
					P2_Ship_Board[P2_Cursor_X][P2_Cursor_Y + 2] = 'X';
				}
			}
			else if (shipsPlaced == 3)
			{
				if (P2_CR_O == 'h')
				{
					P2_Ship_Board[P2_Cursor_X + 0][P2_Cursor_Y] = 'X';
					P2_Ship_Board[P2_Cursor_X + 1][P2_Cursor_Y] = 'X';
					P2_Ship_Board[P2_Cursor_X + 2][P2_Cursor_Y] = 'X';
				}
				else
				{
					P2_Ship_Board[P2_Cursor_X][P2_Cursor_Y + 0] = 'X';
					P2_Ship_Board[P2_Cursor_X][P2_Cursor_Y + 1] = 'X';
					P2_Ship_Board[P2_Cursor_X][P2_Cursor_Y + 2] = 'X';
				}
			}
			else if (shipsPlaced == 4)
			{
				if (P2_DS_O == 'h')
				{
					P2_Ship_Board[P2_Cursor_X + 0][P2_Cursor_Y] = 'X';
					P2_Ship_Board[P2_Cursor_X + 1][P2_Cursor_Y] = 'X';
				}
				else
				{
					P2_Ship_Board[P2_Cursor_X][P2_Cursor_Y + 0] = 'X';
					P2_Ship_Board[P2_Cursor_X][P2_Cursor_Y + 1] = 'X';
				}
			}
			shipsPlaced++;
			P2_Cursor_X = 0;
			P2_Cursor_Y = 0;
			input = '\0';
		}

	}

	system("cls");
	displayBanner();
	printf("\t\t\t\t\t\t\tHere's your board, remember it well!\n\n\n");
	printBoard(P2_Ship_Board);

	system("pause");
	system("cls");
	input = '\0';

	initBoard(blankBoard);

	// Begin Turns

	while (!isGameOver)
	{
		// Player One Turn

		hasShot = 0;
		input = '\0';
		P1_Cursor_X = 0;
		P1_Cursor_Y = 0;

		while (!hasShot)
		{
			system("cls");
			displayBanner();
			printf("\t\t\t\t%s, it's your turn! %s has made %d successful shots. Navigate with WASD and fire with SPACE.\n\n", P1_Name, P2_Name, P2_Hits);
			
			initBoard(blankBoard);
			
			copyBoard(P1_Guess_Board, blankBoard);
			blankBoard[P1_Cursor_X][P1_Cursor_Y] = '#';
			printBoard(blankBoard);

			getCursorMovement(&P1_Cursor_X, &P1_Cursor_Y, &input, &P1_CA_O);

			if (input == ' ')
			{
				hasShot = 1;
				
				if (P2_Ship_Board[P1_Cursor_X][P1_Cursor_Y] == 'X')
				{
					P1_Hits++;
					printf("\t\t\t\t\tYour shot hit a ship!\n");
					P1_Guess_Board[P1_Cursor_X][P1_Cursor_Y] = 'O';
					P2_Ship_Board[P1_Cursor_X][P1_Cursor_Y] = 'O';
				}
				else
				{
					printf("\t\t\t\t\tYou missed!\n");
					P1_Guess_Board[P1_Cursor_X][P1_Cursor_Y] = 'X';
				}
			}
		}

		if (P1_Hits >= 17)
		{
			isGameOver = 1;
		}

		system("pause");

		// Player Two Turn

		if (!isGameOver)
		{
			hasShot = 0;
			input = '\0';
			P2_Cursor_X = 0;
			P2_Cursor_Y = 0;

			while (!hasShot)
			{
				system("cls");
				displayBanner();
				printf("\t\t\t\t%s, it's your turn! %s has made %d successful shots. Navigate with WASD and fire with SPACE.\n\n", P2_Name, P1_Name, P1_Hits);

				initBoard(blankBoard);

				copyBoard(P2_Guess_Board, blankBoard);
				blankBoard[P2_Cursor_X][P2_Cursor_Y] = '#';
				printBoard(blankBoard);

				getCursorMovement(&P2_Cursor_X, &P2_Cursor_Y, &input, &P1_CA_O);

				if (input == ' ')
				{
					hasShot = 1;

					if (P1_Ship_Board[P2_Cursor_X][P2_Cursor_Y] == 'X')
					{
						P2_Hits++;
						printf("\t\t\t\t\tYour shot hit a ship!\n");
						P2_Guess_Board[P2_Cursor_X][P2_Cursor_Y] = 'O';
						P1_Ship_Board[P2_Cursor_X][P2_Cursor_Y] = 'O';
					}
					else
					{
						printf("\t\t\t\t\tYou missed!\n");
						P2_Guess_Board[P2_Cursor_X][P2_Cursor_Y] = 'X';
					}
				}
			}
		}

		if (P2_Hits >= 17)
		{
			isGameOver = 1;
		}

		system("pause");
	}

	system("cls");
	displayBanner();

	if (P1_Hits >= 17)
	{
		printf("\t\t\tThe game is over, %s won!\n\n", P1_Name);
	}

	else if (P2_Hits >= 17)
	{
		printf("\t\t\tThe game is over, %s won!\n\n", P2_Name);
	}

	else
	{
		printf("\t\t\tThe game is over, it's a tie! This shouldn't be possible though..\n\n");
	}

	exitGame(1);



	return;
}