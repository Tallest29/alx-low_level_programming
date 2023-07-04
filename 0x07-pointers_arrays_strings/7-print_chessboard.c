#include "main.h"
#include <stdio.h>
/**
  *print_chessboard - print a chessboard
  *@a: pointer to pieces to print
  *
  *Return: void
  */
void print_chessboard(char (*a)[8])
{
	int i;
	int j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			putchar(a[i][j]);
		}
		putchar('\n');
	}
}
