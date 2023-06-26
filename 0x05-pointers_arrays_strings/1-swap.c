#include "main.h"
/**
  *swap_int - function that swaps two integers
  *@a: First integer
  *@b: Second integer
  */
void swap_int(int *a, int *b)
{
	int d;

	d = *a;
	*a = *b;
	*b = d;
}
