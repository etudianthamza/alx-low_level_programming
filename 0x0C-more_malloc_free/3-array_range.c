#include "main.h"

/**
 * array_range - creates an array of integers.
 * @min: the first integer.
 * @max: the second integer.
 * Return: Always 0 (Success).
 *
*/

int *array_range(int min, int max)
{
	unsigned int i;
	char *m;

	if (min > max)
		return (NULL);
	m = (int *)malloc((max - min) + 1);
	if (m == 0)
		return (NULL);
	return (m);
}
