#include "main.h"

/**
 * is_palindrome_for_help - the function for helping us
 *@s: the caractere
 *@start: the integer
 *@end: the integer
 *
*/

int is_palindrome_for_help(char *s, int start, int end)
{
	if (start >= end)
		return (1);
	if (s[start] != s[end])
		return (0);
	return (is_palindrome_for_help(s, start + 1, end - 1));
}

/**
 * is_palindrome - returns 1 if a string is a palindrome and 0 if not
 *
 * @s: charactere
 * Return: Always 0 (Success)
 *
*/

int is_palindrome(char *s)
{
	int len = 0;

	if (!s)
		return (1);
	while (s[len] != '\0')
		len++;
	return (is_palindrome_for_help(s, 0, len - 1));
}
