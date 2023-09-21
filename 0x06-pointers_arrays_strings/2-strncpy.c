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
	int i;

	for (i = 0 ; i < n && src[i] != '\0' ; i++)
	{
		dest[i] = src[i];
	}
	for (;i < n ; i++)
	{
		dest[i] = '\0';
	}

	return dest;
}
