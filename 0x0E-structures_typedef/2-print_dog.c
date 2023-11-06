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
		printf("Name: %s\n", (d->name != NULL) ? d->name : "(nil)");
		printf("Age: %.6f\n", d->age);
		printf("Owner: %s\n", (d->owner != NULL) ? d->owner : "(nil)");
	}
}
