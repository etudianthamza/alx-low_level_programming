#include "dog.h"

/**
 * new_dog -  function that creates a new dog.
 * @name: the name of a dog.
 * @age: he's age.
 * @owner: he's or she's owner.
 * Return: Always 0 (Success).
*/

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t my_dog
		if (my_dog)
		{
			my_dog->name = name;
			my_dog->age = age;
			my_dog->owner = owner;
			return (&my_dog);
		}
	return (NULL);
}
