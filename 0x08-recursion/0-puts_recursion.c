#include "main.h"

/**
 * _puts_recursion - prints a string, followed by a new line
 *
 *@s : the charcteres
 *
 * Return: Always 0 (Success)
 *
*/

void _puts_recursion(char *s)
{
	int i;

	if (s[i] == '\0')
	{
		return;
	}
	_putchar(s[i]);
	_puts_recc(&s[i + 1]);
}
