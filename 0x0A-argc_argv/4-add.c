#include "main.h"

/**
 * main - function of printing the sum
 * @argv : the character
 * @argc : the integer
 * Return: Always 0 (Success)
*/

int main(int argc, char *argv[])
{
	int sum = 0;
	char *c;

	while (--argc)
	{
		for (c = argv[argc] ; *c ; c++)
			if (*c < '0' || *c > '9')
				return (printf("Erreur\n"), 1);
		sum += atoi(argv[argc]);
	}
	printf("%d\n", sum);
	return (0);
}
