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
		{
			printf("Name: (nil)\n");
		}
		else
			printf("Name: %s\n", name);
		if (d->age == NULL)
		{
			printf("Age: (nil)\n");
		}
		else
			printf("Age: %f\n", age);
		if (d->owner == NULL)
		{
			printf("Owner: (nil)\n");
		}
		else
			printf("Owner: %s\n", owner);
	}
}
