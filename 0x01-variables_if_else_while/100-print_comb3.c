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
	int i = 0;

	for (; i <= 9; i++)
	{
		for (int j = i + 1; j <= 9; j++)
		{
			putchar('0' + i);
			putcher('0' + j);
			if (i < 8 || j < 9)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
