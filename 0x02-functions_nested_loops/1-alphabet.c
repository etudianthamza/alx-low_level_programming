#include "main.h"

/**
 * print_alphabet - write the alphabets in lowercase
 *
 * the alphabets to print
 *
 * Return: on success 1.
*/

void print_alphabet(void)
{
	int ch = 'a';

	while (ch <= 'z')
	{
		_putchar(ch);
		ch++;
	}
	_putchar('\n');
}
