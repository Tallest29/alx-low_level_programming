#include "main.h"
#include <stdio.h>

/**
 * print_square - prints a square, followed by a new line;
 * @size: size of the square
 */
void print_square(int size)
{
	if (size <= 0)
	{
		putchar('\n');
	}
	else
	{
		int a;
		int b;

		for (a = 0; a < size; a++)
		{
			for (b = 0; b < size; b++)
			{
				putchar('#');
			}
			putchar('\n');
		}
	}
}

