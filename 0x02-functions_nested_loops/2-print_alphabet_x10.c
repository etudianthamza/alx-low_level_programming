#include "main.h"

/**
 * print_alphabet_x10 - write 10 times the alphabets in lowercase
 *
 * the alphabets to print
 *
 * Return: on success 1.
*/

void print_alphabet_x10(void)
{
	int i = 0;

	while (i < 10)
	{
		int ch = 'a';

		while (ch <= 'z')
		{
			_putchar(ch);
			ch++;
		}
		_putchar('\n');
		i++;
	}
}
