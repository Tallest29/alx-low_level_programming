#include "main.h"
#include <stdio.h>

/**
  *print_most_numbers - Print the numbers excluding 2 and 4
  *Return:  void
  */
void print_most_numbers(void)
{
	char j;

	for (j = '0'; j <= '9'; j++)
	{
		if (!(j == '2' || j == '4'))
			putchar(j);
	}
	putchar('\n');
}
