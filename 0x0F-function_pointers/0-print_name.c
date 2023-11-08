#include "function_pointers.h"

/**
 * print_name - prints a name.
 * @name: the character wish is the name.
 * @f: the pointer to function.
 * Return: Always 0 (Success).
 *
*/

void print_name(char *name, void (*f)(char *))
{
	f(&name);
}
