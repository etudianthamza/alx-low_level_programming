#include "main.h"

/**
 * str_concat - concatenates two strings
 * @s1: the first string
 * @s2: the second string
 * Return: Always 0 (Success)
*/

char *str_concat(char *s1, char *s2)
{
	int i = 0, j = 0, h = 0, l = 0;
	char *m;

	for (; s1[i] != '\0'; i++)
	;
	for (; s2[j] != '\0' ; j++)
	;
	m = (char*)malloc((i + j + 1) * sizeof(char));

	if (m == NULL)
		return NULL;

	for (; h < i; h++)
	{
		m[h] = s1[h];
	}
	for (; l < j; l++)
	{
		m[h] = s2[l];
		h++;
	}
	m[h] = '\0';

	return (m);
}
