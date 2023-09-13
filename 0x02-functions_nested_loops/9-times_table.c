#include "main.h"
/**
 * times_table - Entry point
 *
 * Description: Prints the alphabet in lowercase
 *
 * Return: Alawys 0 (Succes)
*/

void times_table(void)
{
	int i, j;
	int h = 0;

	for (i = 0 ; i < 10 ; i++)
	{
		for (j = 0 ; j < 10 ; j++)
		{
			if (j < 9)
			{
				if ((j * h) > 9)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(((j * h) / 10) + '0');
					_putchar(((j * h) % 10) + '0');
				}
				else if ((j * h) = 0)
				{
					_putchar((j * h) + '0');
					_putchar(',');
				}
				else
				{
					_putchar(' ');
					_putchar(' ');
					_putchar((j * h) + '0');
					_putchar(',');
				}
			}
			else
			{
				if ((j * h) > 9)
				{
					_putchar(((j * h) / 10) + '0');
					_putchar(((j * h) % 10) + '0');
				}
				else
					_putchar((j * h) + '0');
			}
		}
		_putchar('\n');
		h++;
	}
}
