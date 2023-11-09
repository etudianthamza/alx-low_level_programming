#include "variadic_functions.h"

/**
 * sum_them_all - the function returns the sum of all its parameters.
 * @n: number of arrguments.
 *
 * Return: Always 0 (Success).
*/

int sum_them_all(const unsigned int n, ...)
{
	if (n != 0)
	{
		unsigned int i = 0;
		unsigned int sum = 0;
		va_list ptr;

		va_start(ptr, n);

		for (; i < n ; i++)
		{
			sum += va_arg(ptr, int);
		}
		va_end(ptr);
		return (sum);
	}
	return (0);
}
