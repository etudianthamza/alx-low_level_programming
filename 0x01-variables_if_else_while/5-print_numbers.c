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
	char ch = '0';

	while (ch <= '9')
	{
		putchar(ch);
		ch++;
	}
	printf("\n");
	return (0);
}
