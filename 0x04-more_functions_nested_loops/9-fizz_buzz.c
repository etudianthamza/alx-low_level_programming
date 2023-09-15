#include "main.h"

/**
 * main - prints the numbers from 1 to 100.
 *
 * Return: always 0 (Success)
 *
*/
int main(void)
{
	int i;

	for (i = 1 ; i < 101 ; i++)
	{
		if (i % 3 == 0 && i % 5 != 0)
		{
			_putchar('F');
			_putchar('i');
			_putchar('z');
			_putchar('z');
		}
		else if (i % 5 == 0 && i % 3 != 0)
		{
			_putchar('B');
			_putchar('u');
			_putchar('z');
			_putchar('z');
		}
		else if (i % 5 == 0 && i % 3 == 0)
		{
			_putchar('F');
			_putchar('i');
			_putchar('z');
			_putchar('z');
			_putchar('B');
			_putchar('u');
			_putchar('z');
			_putchar('z');
		}
		else
		{
			_putchar('0' + i);
			_putchar(' ');
		}
		_putchar('\n');
		return (0);
	}
}
