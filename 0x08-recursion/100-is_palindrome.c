#include "main.h"

/**
 *_strlen - the length of a string
 *@s: the string
 *
 *Return: Always 0 (Success)
*/

int _strlen(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen(s + 1));
}

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
	int len = _strlen(s);

	if (len <= 1)
		return (1);
	return (is_palindrome_for_help(s, 0, len - 1));
}
