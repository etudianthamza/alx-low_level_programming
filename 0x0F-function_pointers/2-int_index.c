#include "function_pointers.h"

/**
 * int_index - searches for an integer.
 * @array: the array of integer.
 * @size: the size of array.
 * @cmp: the pinter to function.
 *
 * Return: Always 0 (Success).
*/

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (cmp && array)
	{
		if (size > 0)
		{
			for (i = 0 ; i < size ; i++)
			{
				if (cmp(array[i]))
					return (i);
			}
			return (-1);
		}
		else
			return (-1);
	}
	return (-1);
}
