#include"header.h"

void menu(void)
{
	char input = '\0';

	system("cls");
	splashScreen();
	displayMenu();

	input = getMenuSelection();

	switch (input)
	{
	case '1':
		PvP();
		break;
	case '2':
		PvC();
		break;
	case '3':
		CvC();
		break;
	case '4':
		displayRules();
		break;
	case '5':
		exitGame(0);
		break;
	default:
		printf("Processing error. Aborting program.\n\n");
		exitGame(1);
	}

}