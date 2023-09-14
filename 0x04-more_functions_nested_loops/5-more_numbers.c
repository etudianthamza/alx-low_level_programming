#include "main.h"

/**
 * more_numbers - prints 10 times the numbers, from 0 to 14
 *
 * Return: Always 0 (Success)
 *
*/

void more_numbers(void)
{
	int i, j, h;
	int a[10] = {49, 48, 49, 49, 49, 50, 49, 51, 49, 52};

	for (i = 0 ; i < 10 ; i++)
	{
		for (j = 48 ; j < 58 ; j++)
		{
			_putchar(j);
		}
		for (h = 0 ; h < 10 ; h++)
		{
			_putchar(a[h]);
		}
		_putchar('\n');
	}
}
