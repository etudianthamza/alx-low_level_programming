#include "main.h"

/**
 * islower - function for charactere lowercase
 * @c: char
 * Return:Always 0 (Success)
 *
*/
int islower(char c)
{
	return (c >= 97 && c <= 122);
}
/**
 * isDelimiter - function for isDelimiter
 * @u:char
 * Return:Always 0 (Success)
*/
int isDelimiter(char u)
{
	int o;
	char delemiter[] = "\t\n,.!?\"(){}";

	for (o = 0 ; o < 12 ; o++)
	{
		if (u == delemiter[o])
			return (1);
	return (0);
	}
}
/**
 * cap_string - function that capitalizes all words of a string
 * @y: the char
 * Return:Always 0 (Success)
 *
*/
char *cap_string(char *y)
{
	char *ptr = y;
	int FindDelimit = 1;

	while (*y)
	{
		if (isDelimiter(*y))
			FindDelimit = 1;
		else if (islower(*y) && FindDelimit)
		{
			*y -= 32;
			FindDelimit = 0;
		}
		else
			FindDelimit = 0;
		y++;
	}
	return (ptr);
}
