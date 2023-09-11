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

	for (; ch <= 9; ch++)
	{
		putchar('0' + ch);
		if (ch < 9)
		{
			putchar(',');
			putchar(' ');
	}
	putchar('\n');
	return (0);
}
