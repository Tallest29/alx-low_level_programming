#include "main.h"
#include <stdio.h>

/**
 * print_line - Draws a straight line in the terminal
 * @n: number of times the character _ should be printed
 */
void print_line(int n)
{
	if (n <= 0)
	{
		putchar('\n');
	}
	else
	{
		int b;

		for (b = 1; b <= n; b++)
		{
			putchar('_');
		}
		putchar('\n');
	}

}

