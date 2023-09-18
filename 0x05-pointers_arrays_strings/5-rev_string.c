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
	int j = 0;
	char temp;

	while (s[i])
		i++;

	while (j < i - 1)
	{
		temp = s[j];
		s[j] = s[i];
		s[i] = temp;
		j++;
		i--;
	}
}
