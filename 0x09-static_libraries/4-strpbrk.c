#include "main.h"
/**
 * _strpbrk -  searches a string for any of a set of bytes
 * @s : the character
 * @accept : the character
 *
 * Return: Always 0 (Success)
*/

char *_strpbrk(char *s, char *accept)
{
	int i, j;
	char *p;

	i = 0;
	while (s[i] != '\0')
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (accept[j] == s[i])
			{
				p = &s[i];
				return (p);
			}
			j++;
		}
		i++;
	}

	return (0);
}
