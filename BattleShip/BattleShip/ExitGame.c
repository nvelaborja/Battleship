#include "header.h"

void exitGame(int exitOP)
{
	char input = '\0';

	if (exitOP == 1)
	{
		exit(EXIT_FAILURE);
	}

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
	printf("****************                                                   ~ E X I T ~                                                    ********************");
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
	printf("****************                                     Are you sure you want to exit? ( Y / N )                                     ********************");
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

	while (input != 'N' && input != 'n' && input != 'Y' && input != 'y')
	{
		input = getch();
		printf("\n");
	}

	if (input == 'n' || input == 'N')
	{
		menu();
	}
	else
	{
		exit(EXIT_FAILURE);
	}

	return;
}