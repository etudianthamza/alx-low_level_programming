#ifndef DOG_H
#define DOG_H
#include "dog.h"

/**
 * init_dog - function that initialize a variable of type struct dog.
 * @d: the object in struct dog.
 * @name: the name of the dog.
 * @age: the age of the dog.
 * @owner: the owner of the dog.
 * Return: Always 0 (Success)
 *
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = &name;
		d->age = age;
		d->owner = &owner;
	}
}
#endif
