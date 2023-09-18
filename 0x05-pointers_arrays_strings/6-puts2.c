#include "main.h"

/**
 * puts2 - prints every other character of a string
 *
 * @str : string
 *
 * Return: Always 0 (Success)
*/

void puts2(char *str)
{
	int i;

	for (i = 0 ; str[i] != '\n' ; ++i)
	{
		if (str[i] % 2 == 0)
		{
			_putchar(str[i]);
		}
		_putchar('\n');
	}
}
