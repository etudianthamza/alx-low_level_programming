#include "main.h"

/**
 * print_diagsums - prints the sum of the two diagonals
 * @a : the integer
 * @size : the inetegr size
 *
 * Return: Always 0 (Success)
 *
*/

void print_diagsums(int *a, int size)
{
	int i, j = 0, u = 0;

	for (i = 0; i < size ; i++)
	{
		j += a[i];
		u += a[size - itr - 1];
		a += size;
	}
	printf("%d, ", j);
	printf("%d\n", u);
}
