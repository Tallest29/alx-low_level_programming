#include "main.h"
/**
  *print_sign - Print the sign of a number
  *@n: Number to be printed
  *Return: 1 for positive numb, -1 for negative num and zero for anything else
  */
int print_sign(int n)
{

	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
}
