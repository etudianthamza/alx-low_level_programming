#include "main.h"

/**
 * *_memset -  fills memory with a constant byte
 *
 * @s : the string
 * @b : the char
 * @n : the nuber of bytes
 *
 * Return: Always 0
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int r;

	for (r = 0 ; n > 0; r++, n--)
	{
		s[r] = b;
	}

	return (s);
}
