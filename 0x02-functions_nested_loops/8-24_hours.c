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
	for (int h = 0; h < 24 ; h++)
	{
		if (h < 10)
		{
			for (int s = 0; s < 60 ; s++)
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
				{
					_putchar('0');
					_putchar('0' + h);
					_putchar(':');
					_putchar('0' + s);
					_putchar('\n');
				}
			}
		}
		else
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
				{
					_putchar('0' + h);
					_putchar(':');
					_putchar('0' + s);
					_putchar('\n');
				}
			}
		}
	}
}
