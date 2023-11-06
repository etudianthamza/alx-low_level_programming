#ifndef DOG_H
#define DOG_H

/**
 * struct dog - structure for the dog.
 * @name: type character.
 * @age: type age.
 * @owner: type character.
 * Return: Always 0 (Success).
*/

struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
