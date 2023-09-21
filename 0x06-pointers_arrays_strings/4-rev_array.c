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
	int j, i, r;

	for (j = (n - 1), i = 0; j > i; j--, i++)
	{
		r = a[i];
		a[i] = a[j];
		a[j] = r;
	}
}
