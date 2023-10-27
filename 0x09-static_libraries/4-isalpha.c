#include "main.h"

/**
 * _isalpha - function to check if character is lowercase
 *
 * @c: checks input of function
 *
 * Return: returns 1 if 'c' is lowercas otherwise always 0 (Success)
*/

int _isalpha(int c)
{
	if ('a' <= c && c <= 'z')
	{
		return (1);
	}
	else if ('A' <= c && c <= 'Z')
	{
		return (1);
	}
	else
		return (0);
}
