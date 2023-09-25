#include "main.h"

/**
 * _memcpy - copies memory area
 *
 * @dest : chaaractere
 * @src : charactere
 * @n : integer
 * Return: Always 0 (Success)
 *
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int y;

	for (y = 0; y < n ; y++)
	{
		dest[y] = src[y];
	}
	return (dest);
}
