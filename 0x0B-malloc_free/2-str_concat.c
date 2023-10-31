#include "main.h"

/**
 * str_concat - concatenates two strings
 * @s1: the first string
 * @s2: the second string
 * Return: Always 0 (Success)
*/

char *str_concat(char *s1, char *s2)
{
	int i = 0, j = 0, h = 0;
	char *m;

	for (; s1[i] != '\0'; i++)
	;
	for (; s2[j] != '\0' ; j++)
	;
	m = malloc(i * sizeof(*s1) + 1);
	for (; h < i; h++)
	{
		m[h] = s1[h];
	}
	m = realloc(m, (i + j) * sizeof(*s2) + 1);

	if (m == 0)
	{
		return (s1);
	}
	else
	{
		for (h = i + 1; h < (i + j); h++)
			m[h] = s2[h];
	}
	return (m);
}
