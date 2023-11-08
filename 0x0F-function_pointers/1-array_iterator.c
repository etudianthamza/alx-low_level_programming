#include "function_pointers.h"

/**
 * array_iterator - executes a function given as a parameter.
 * on each element of an array.
 * @array: the array of integers.
 * @size: the size of array.
 * @action: the pointer to the function should I use.
 * Return: Always 0 (Success).
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	if (array && action)
	{
		for (i = 0 ; i < size ; i++)
		{
			action(array[i]);
		}
	}
}
