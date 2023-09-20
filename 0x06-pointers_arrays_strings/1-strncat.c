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
	int i, j = 0;

	for (i = 0 ; dest[i] != '\0' ; i++)
	{
	}
	while (j < n)
	{
		if (src[0] != '\0')
		{
			dest[i] = src[0];
		}
		else if (src[j] != '\0')
		{
			dest[i + j] = src[j - 1];
		}
		j++;
	}
	dest[i + j - 1] = src[j - 1];
	dest[i + j] = '\0';

	return (dest);
}
