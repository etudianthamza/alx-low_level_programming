#include "variadic_functions.h"

/**
 * print_numbers - prints numbers, followed by a new line.
 * @separator: string to be printed between numbers.
 * @n: number of integers passed to the function.
 * Return: Always 0 (Success).
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	if (n != NULL)
	{
		unsigned int i = 0;
		va_list ptr;

		va_start(ptr, n);
		for (; i < n; i++)
		{
			printf("%d", va_arg(ptr, int));
			if (i != (n - 1) && separator != NULL)
			{
				printf("%s", separator);
			}
		}
		printf("\n");
		va_end(ptr);
	}
}
