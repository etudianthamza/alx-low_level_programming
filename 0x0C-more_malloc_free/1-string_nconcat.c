#include "main.h"

/**
 * string_nconcat -  concatenates two strings.
 * @s1: the chracter.
 * @s2: the character.
 * @n: the integer.
 * Return: Always 0 (Success).
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int i = 0, j = 0, h = 0, l = 0;
	char *m;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (; s1[i] != '\0'; i++)
	;
	for (; s2[j] != '\0' ; j++)
	;
	if (n >= j)
		n = j;
	m = (char *)malloc(n + i + 1);

	if (m == NULL)
		return (NULL);

	for (; h < i; h++)
	{
		m[h] = s1[h];
	}
	for (; l < n; l++)
	{
		m[h] = s2[l];
		h++;
	}
	m[h] = '\0';
	return (m);
}
