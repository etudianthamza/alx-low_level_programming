#include "main.h"

/**
 * main - function that multiplies two numbers
 * @argc : the integer
 * @argv : the characetr
 * Return: Always 0 (Success)
 *
*/

int main(int argc, char *argv[])
{
	int i;

	if (argc == 3)
	{
		i = atoi(argv[argc - 1]) * atoi(arg[argc - 2]));
		printf("%d\n", i);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
