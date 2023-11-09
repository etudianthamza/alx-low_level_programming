#include "variadic_functions.h"

/**
 * sum_them_all - the function returns the sum of all its parameters.
 * @n: the constante integer.
 *
 * Return: Always 0 (Success).
*/

int sum_them_all(const unsigned int n, ...)
{
	if (n != 0)
	{
		unsigned int i;
		int sum = 0;
		va_list ptr;

		va_start(ptr, n);
		for (i = 0; i < n ; i++)
		{
			sum += va_arg(ptr, unsigned int);
			va_end(ptr);
			return (sum);
		}
	}
	return (0);
}
