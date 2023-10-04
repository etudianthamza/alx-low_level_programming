#include "main.h"

/**
 * main - function prints the number of arrgument
 * @argc : the integer
 * @argv : the character
 * Return: Always 0 (Success)
 *
*/

int main(int argc, char *argv[])
{
	while (argv[argc] != '\0')
	{
		argc++;
	}
	return (argc);
}
