#include "main.h"
/**
  *_puts - function that print a string followed by new line
  *@str: Value of string
  */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
		_putchar('\n');
}
