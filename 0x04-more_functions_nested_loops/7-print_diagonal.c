#include "main.h"

/**
 * print_diagonal -  draws a diagonal line on the terminal.
 *
 * @n: n is the number of times the character \ should be printed
 *
 * Return: Always 0 (Success)
*/

void print_diagonal(int n)
{
	int i = 0, j;

	if (n > 0)
	{
		while (i < n)
		{
			if (n == 1)
			{
				_putchar('\');
			}
			else
			{
				for (j = 0 ; j < n-1 ; i++)
				{
					_putchar(' ');
				}
				_putchar('\\');
				_putchar('\n');
			}
			i++;
		}
		_putchar('\n');
	}
	else
		_putchar('\n');
}

