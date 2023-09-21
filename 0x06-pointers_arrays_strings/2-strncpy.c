#include "main.h"

/**
 * _strncat -  concatenates two strings.
 * _strncpy - a function that copies a string.
 *
 *@dest : the first string
 *@src : the seconf string
 *@n : the number of bytes
 *
 * Return:Always 0 (Success)
*/

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0 ; dest[i] != '\0' ; i++)
	{
	}
	for (j = 0 ; src[j] != '\0' && j < n ; j++)
	{
		if (j == sizeof(src))
		{
			dest = src;
		}
		else
		{
			dest[j] = src[j];
		}
	}
}
