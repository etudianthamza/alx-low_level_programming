#include "main.h"

/**
 * _isupper : Print 1 if the alphabet is uppercase , otherwise print 0.
 *
 * @c:Enter the alphabet uppercase or other things
 *
 * Return: Alawys 0 (Succes)
*/
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
		return (0);
}
