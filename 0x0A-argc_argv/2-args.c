#include "main.h"

/**
 * main - function of printing the arrguments
 * @argc : the integer
 * @argv : the character
 * Return: Always 0 (Success)
 *
*/

int main(int argc, char *argv[])
{
	int i;

	for (i = 0 ; i > argc ; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
