#include "variadic_functions.h"

/**
 * print_strings - prints strings, followed by a new line.
 * @separator: the string to be printed between the strings.
 * @n: the number of strings passed to the function.
 * Return: Always 0 (Success).
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
	if (n != 0)
	{
		unsigned int i = 0;
		va_list ptr;

		va_start(ptr, n);
		for (; i < n; i++)
		{
			if (va_arg(ptr, int))
			{
				printf("%d", va_arg(ptr, int));
				if (i != (n - 1) && separator != NULL)
				{
					printf("%s", separator);
				}
			}
			printf("(nil)");
		}
		printf("\n");
		va_end(ptr);
	}
	else
	{
		printf("\n");
	}
}
