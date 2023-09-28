#include "main.h"

/**
 * _strlen_recursion - returns the length of a string
 *
 * @s: tha character
 *
 * Return: Always 0 (Success)
 *
*/

int _strlen_recursion(char *s)
{
	return (1 + _strlen_recursion(s + 1));
	if (*s == '\0')
	{
		return (0);
	}
}
