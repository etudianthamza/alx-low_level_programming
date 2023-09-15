#include "main.h"

/**
 * print_triangle -  prints a triangle, followed by a new line
 *
 * @size:is the size of the triangle
 *
 * Return: Always 0 (Success)
 *
*/

void print_triangle(int size)
{
	int i = 0, j, h;

	if (size > 0)
	{
		while (i < size)
		{
			if (size == 1)
			{
				_putchar(38);
				_putchar('\n');
			}
			else
			{
				for (j = size - 1 ; j > i ; j--)
				{
					_putchar(' ');
				}
				for (h = 0 ; h < i + 1 ; h++)
				{
					_putchar(38);
				}
				_putchar('\n');
			}
			i++;
		}
	}
	else
		_putchar('\n');
}


