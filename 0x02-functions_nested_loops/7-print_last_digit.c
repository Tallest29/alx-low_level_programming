#include "main.h"
/**
  *print_last_digit - Print the last digit of a number
  *@d: Number to be treated
  *Return: Value of last digit of a number
  */
int print_last_digit(int d)
{
	int last;

	last = d % 10;
	if (last < 0)
	{
		last = last * -1;
	}
	_putchar(last + '0');
	return (last);
}
