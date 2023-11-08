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
	int i = 1;

	if (cmp && array)
	{
		if (size > 0)
		{
			while (!cmp(array[i - 1]))
			{
				if (i == size)
				{
					return (-1);
				}
				i++;
			}
			return (i - 2);
		}
		else
			return (-1);
	}
}
