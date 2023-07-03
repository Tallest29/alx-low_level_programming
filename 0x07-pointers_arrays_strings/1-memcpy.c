#include "main.h"
/**
  *_memcpy - function that copies memory area
  *@dest: storage area
  *@src: copied area
  *@n: number or vale of bytes
  *Return: copied memory when bytes change
  */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int r = 0;
	int i = n;

	for (; r < i; r++)
	{
		dest[r] = src[r];
		n--;
	}
	return (dest);
}
