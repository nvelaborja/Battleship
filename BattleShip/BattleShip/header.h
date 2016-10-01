#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <Windows.h>
#include <conio.h>

#define size 15

void menu(void);
void PvP(void);
void PvC(void);
void CvC(void);
void splashScreen(void);
void displayBanner(void);
void displayMenu(void);
void displayRules(void);
void exitGame(int exitOP);
char getMenuSelection(void);
void printBoard(char board[][size]);
void initBoard(char board[][size]);
void copyBoard(char boardFrom[][size], char boardTo[][size]);
void updateBoard(int P1orP2, char board[][size], int *P1_CA_X, int *P1_CA_Y, int *P1_CR_X, int *P1_CR_Y, int *P1_BS_X, int *P1_BS_Y, int *P1_SB_X, int *P1_SB_Y, int *P1_DS_X, int *P1_DS_Y,
	int *P2_CA_X, int *P2_CA_Y, int *P2_CR_X, int *P2_CR_Y, int *P2_BS_X, int *P2_BS_Y, int *P2_SB_X, int *P2_SB_Y, int *P2_DS_X, int *P2_DS_Y,
	char *P1_CA_O, char *P1_CR_O, char *P1_BS_O, char *P1_SB_O, char *P1_DS_O,
	char *P2_CA_O, char *P2_CR_O, char *P2_BS_O, char *P2_SB_O, char *P2_DS_O);
void toggleOrientation(char *orientation);
void getCursorMovement(int *cursor_x, int *cursor_y, char *input, char *orientation);