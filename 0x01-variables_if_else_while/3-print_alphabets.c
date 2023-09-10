#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: Prints the alphabet in lowercase and then in uppercase
 *
 * Return: Alawys 0 (Succes)
 */

int main(void)
{
	char ch = 'a';
	char chup = 'A';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	while (chup <= 'Z')
	{
		putchar(chup);
		chup++;
	}
	printf("\n");
	return (0);
}
