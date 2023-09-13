#include "main.h"

/**
 * _abs - write the alphabets in lowercase
 *
 * @i : the alphabets to print
 *
 * Return: on success 1.
*/

int _abs(int i)
{
	if (i < 0)
	{
		return (-i);
	}
	else
		return (i);
}
