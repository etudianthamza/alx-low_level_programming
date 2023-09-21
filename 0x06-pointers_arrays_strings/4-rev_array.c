#include "main.h"

/**
 * reverse_array -  function that reverses the content of an array of integers
 *
 * @a : an array of integers
 * @n : the number of elements to swap
 * Return:Always 0 (Success)
*/

void reverse_array(int *a, int n)
{
	int i = n;

	while (i > 0)
	{
		if (i != n)
		{
			_putchar(',');
			_putchar(' ');
		}
		putchar(a[i]);
		i--;
	}
	_putchar('\n');
}
