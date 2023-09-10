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
	char ch = 'a';

	while (ch <= 'z')
	{
		if (ch != 'e' || ch != 'q')
			putchar(ch);
			ch++;
	}
	printf("\n");
	return (0);
}
