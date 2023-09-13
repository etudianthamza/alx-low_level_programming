#include "main.h"

/**
 * jack_bauer - write the alphabets in lowercase
 *
 *  the alphabets to print
 *
 * Return: on success 1.
*/

void jack_bauer(void)
{
	int h = 0;

	while (h < 10)
	{
		int s = 0;

		for (; s < 60 ; s++)
		{
			if (s < 10)
			{
				_putchar('0');
				_putchar('0' + h);
				_putchar(':');
				_putchar('0');
				_putchar('0' + s);
				_putchar('\n');
			}
			else
				_putchar('0');
			_putchar('0' + h);
			_putchar(':');
			_putchar('0' + s);
			_putchar('\n');
		}
		h++;
	}
	for (h = 10 ; h < 24 ; h++)
	{
		int s = 0;

		for (; s < 60 ; s++)
		{
			if (s < 10)
			{
				_putchar('0' + h);
				_putchar(':');
				_putchar('0');
				_putchar('0' + s);
				_putchar('\n');
			}
			else
				_putchar('0' + h);
			_putchar(':');
			_putchar('0' + s);
			_putchar('\n');
		}
	}
}
