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
	int ch = 0;

	for (; ch <= 16; ch++)
	{
		if (ch < 10)
		{
			putchar('0' + ch);
		}
		else
			putchar('a' + ch);
	}
	putchar('\n');
	return (0);
}
