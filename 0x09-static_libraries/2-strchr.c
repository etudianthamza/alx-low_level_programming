#include "main.h"

/**
 * _strchr - copies memory area
 *
 * @c : chaaractere
 * @s : charactere
 * Return: Always 0 (Success)
 *
*/

char *_strchr(char *s, char c)
{
	unsigned int y;

	for (y = 0; s[y] >= '\0' ; y++)
	{
		if (s[y] == c)
		{
			return (s + y);
		}
	}

	return ('\0');
}
