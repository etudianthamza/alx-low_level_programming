#include "main.h"

/**
 * rev_string - reverses a string
 *
 * @s : string
 * Return: Always 0(Success)
 *
*/

void rev_string(char *s)
{
	int i = 0;

	while (s[i])
		i++;
	int j = i;

	while (i--)
	{
		s[i] = s[j - i];
	}
}
