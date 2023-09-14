#include "main.h"

/**
 * _isdigit - Print 1 if it is a digit, otherwise print 0.
 *
 * @c:Enter the digit or other things
 *
 * Return: Alawys 0 (Succes)
*/

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
		return (0);
}
