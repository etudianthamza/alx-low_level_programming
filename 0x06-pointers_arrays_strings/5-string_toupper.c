#include "main.h"

/**
 * string_toupper - changes all lowercase letters of a string to uppercase
 * @t: the string on lowercase to UPPERCASE
 *
 * Return:Always 0 (Success)
*/

char *string_toupper(char *t)
{
	int i;

	for (i = 0; t[i] != '\0' ; i++)
	{
		t[i] = t[i] + 32;
	}
	return (t);
}
