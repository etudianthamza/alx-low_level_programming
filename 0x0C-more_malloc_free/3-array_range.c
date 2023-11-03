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
	int i;
	int *m;

	if (min > max)
		return (NULL);
	m = (int *)malloc(sizeof(int) * ((max - min) + 1));
	if (m == 0)
		return (NULL);
	for (i = 0; min <= max ; i++, min++)
	{
		m[i] = min;
	}
	return (m);
}
