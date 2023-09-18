#include "main.h"
/**
 * _strlen - the function returns the length of a string
 *
 * @s : the charcters
 *
 * Return: Always 0 (Success)
*/

int _strlen(char *s)
{
	int count;

	for (count = 0 ; *s != '\0' ; s++)
		count++;
	return (count);
}
