#include "main.h"

/**
 * create_array - function creates an array of chars
 * @size : the integer
 * @c : the character
 * Return: Always 0 (Success)
*/

char *create_array(unsigned int size, char c)
{
	char *n = malloc(size);

	if (size == 0 || n == 0)
		return (0);

	while (size--)
		n[size] = c;

	return (n);
}
