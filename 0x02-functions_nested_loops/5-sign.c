#include "main.h"

/**
 * print_sign - prints the sign of a number n
 *
 * @n: if n < 0 print 0 and return 0, if n > 0 print + return 1
 *
 * Return: on success 1.
*/

int print_sign(int n)
{
	if (n > 0)
	{
		return (1);
		_putchar('+');
	}
	else if (n < 0)
	{
		return (-1);
		_putchar('-');
	}
	else
		return (0);
		_putchar('0');
}
