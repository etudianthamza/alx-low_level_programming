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
	int i, j, result;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			u = j + 1;
			result = i * u;

			if (j == 0)
				_putchar('0');
			else
				_putchar(',');
			_putchar(' ');
			{
				if (result < 10 && j != 0)
					_putchar(' ');
				else if (j != 0)
				{
					_putchar((result / 10) + '0');
				}
				_putchar((result % 10) + '0');
			}
			if (j == 9)
				_putchar('\n');
		}
	}
}

