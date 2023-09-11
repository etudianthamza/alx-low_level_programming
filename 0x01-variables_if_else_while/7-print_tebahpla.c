#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: Prints the alphabet in lowercase
 *
 * Return: Alawys 0 (Succes)
*/

int main(void)
{
	char ch = 'z';

	for (; ch >= 'a'; ch--)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
