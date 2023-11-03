#include "main.h"

/**
 * _calloc - allocates memory for an array, using malloc.
 * @nmemb: the integer.
 * @size: the integer.
 * Return: Always 0 (Success).
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *m;

	if (nmemb == 0 || size == 0)
		return (NULL);
	m = malloc(nmemb * size);
	if (m == 0)
		return (NULL);
	unsigned int u = nmemb * size;

	for (; i < u; i++)
	{
		m[i] = 1;
	}
	return (m);
}
