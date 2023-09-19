#include "main.h"

/**
 * print_array -  prints n elements of an array of integers
 * @a: integer
 * @n : integer
 *
 * Return : Always 0 (Success)
 *
*/
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i != (n - 1))
		{
			if (a[i] < 0)
			{
				_putchar(-a[i]);
				_putchar(',');
				_putchar(' ');
			}
			else
				_putchar(a[i]);
			_putchar(',');
			_putchar(' ');
		}
		else
			_putchar(a[i]);
	}
	_putchar('\n');
}
