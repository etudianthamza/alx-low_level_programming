#include <unistd.h>
#include "main.h"

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 *
*/

int _putchar(char c)
{
	return (write(1, &c, 1));
}
/**
 * print_alphabet - write the alphabets in lowercase
 * the alphabets to print
 *
 * Return: on success 1.
*/
void print_alphabet(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		_putchar(ch);
		ch++;
	}
	_putchar('\n');
	return (0);
}
