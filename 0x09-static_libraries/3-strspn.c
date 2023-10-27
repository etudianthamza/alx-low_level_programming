#include "main.h"

/**
 * _strspn - copies memory area
 *
 * @s : chaaractere
 * @accept : char
 * Return: Always 0 (Success)
 *
*/

unsigned int _strspn(char *s, char *accept)
{
	unsigned int y, u;

	for (y = 0; s[y] != '\0' ; y++)
	{
		for (u = 0 ; accept[u] != s[y] ; u++)
		{
			if (accept[u] == '\0')
				return (y);
		}
	}
	return (y);
}
