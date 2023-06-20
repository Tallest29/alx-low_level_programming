#include "main.h"
/**
 * print_alphabet - Make the alphabet
 * Return: void
 */
void print_alphabet(void)
{
	char t;

	for (t = 97; t <= 122; t++)
	{
		_putchar(t);
	}
	_putchar('\n');
}
