#include "main.h"

/**
 * wildcmp -  compares two strings if the strings can be considered identical
 *
 * @s1: the fist string
 * @s2: the second string
 *
 *Return: Always 0 (Success)
*/

int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0')
	{
		if (*s2 == '\0' || (*s2 == '*' && wildcmp(s1, s2 + 1)))
			return (1);
		return (0);
	}
	if (*s2 == '*')
		return (wildcmp(s1, s2 + 1) || wildcmp(s1 + 1, s2));
	if (*s1 == *s2)
	{
		return (wildcmp(s1 + 1, s2 + 1));
	}
	return (0);
}
