#include "dog.h"

/**
 * print_dog - print dog.
 * @d: the dog.
 * Return: Always 0 (Success).
 *
*/

void print_dog(struct dog *d)
{
	if (d)
	{
		if (d->name == NULL)
		printf("Name: (nil)");
		else
		{
			printf("Name: %s", name);
			printf("Age: %f", age);
			printf("Owner: %s", owner);
		}
	}
}
