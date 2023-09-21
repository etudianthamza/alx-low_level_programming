#include "main.h"

/**
 * _strcmp - a function that compares two strings
 *
 * @s1 : the first string
 * @s2 : the second string
 *
 * Return:Always 0 (Success)
 *
*/

int _strcmp(char *s1, char *s2)
{
	if (s1 == s2)
	{
		return (0);
	}
	else if (s1[0] > s2[0])
	{
		return (s1[0] - s2[0]);
	}
	else if (s1[0] < s2[0])
	{
		return (-(s2[0] - s1[0]));
	}
}
