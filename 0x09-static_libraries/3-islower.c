#include "main.h"

/**
 * _islower - function to check if character is lowercase
 *
 * @c: checks input of function
 *
 * Return: returns 1 if 'c' is lowercas otherwise always 0 (Success)
*/

int _islower(int c)
{
	if ('a' <= c && c <= 'z')
	{
		return (1);
	}
	else
		return (0);
}
