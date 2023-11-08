#include "function_pointers.h"

/**
 * print_name - prints a name.
 * @name: the name to be printed.
 * @f: the pointer to function.
 * Return: Always 0 (Success).
 *
*/

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
