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

	if (min > max)
		return (NULL);
	int *m = (int *)malloc(sizeof(int) * ((max - min) + 1));
	if (m == 0)
		return (NULL);
	for (i = 0; min <= max ; i++)
	{
		m[i] = min;
		min++;
	}
	return (m);
}
