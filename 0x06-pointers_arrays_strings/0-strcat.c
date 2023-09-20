#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest : the first string to concatenates
 * @src : the second string to concatenates
 *
 * Return:Always 0 (Success)
 *
*/

char *_strcat(char *dest, char *src)
{
	int i, j;

	for (i = 0 ; dest[i] != '\0' ; i++)
	{
		_putchar(dest[i]);
	}
	for (j = 0 ; src[j] != '\0' ; j++)
	{
		_putchar(src[j]);
	}
	_putchar('\0');
	_putchar(NULL);
	return (dest);
}
