#include "main.h"

/**
 * print_last_digit- print the last digit of a number given
 *
 * @u : enter the number u for extract the last digit
 *
 * Return: Alawys 0 (Succes)
 *
*/

int print_last_digit(int u)
{
	if (u < 0)
	{
		_putchar('0' + (-u) % 10);
		return (-u % 10);
	}
	else if (u = INT_MIN)
	{
		_putchar('0' + 8);
		return (-u % 10);
	}
	else 
		_putchar('0' + u % 10);
	return (u % 10);
}
