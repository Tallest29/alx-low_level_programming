#include "main.h"
/**
  *_isdigit - Checks for a digit 0 through 9
  *@c: Digit to be checked
  *Return: 1 for a digit and 0 for everything else
  */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
