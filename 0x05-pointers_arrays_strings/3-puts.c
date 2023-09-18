#include "main.h"

/**
 * _puts - prints a string, followed by a new line, to stdout
 *
 * @str : the string
 *
 * Return: Always 0 (Success)
*/

void _puts(char *str)
{
	for (str = 0 ; *str != '\0' ; str++)
	{
		_putchar(*str + 0);
	}
	_putchar('\n');
}
