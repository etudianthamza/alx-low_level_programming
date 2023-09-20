#include "main.h"

/**
 * _strncat - concatenates two strings
 *
 * @dest : the first string to concatenates
 * @src : the second string to concatenates
 * @n : number of bytes
 *
 * Return:Always 0 (Success)
 *
*/

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0 ; dest[i] != '\0' ; i++)
	{
	}
	for (j = 0 ; src[j] != '\0' ; j++)
	{
		while (j < n)
		{
			dest[i + j] = src[j];
		}
	}
	dest[i + j] = '\0';

	return (dest);
}
