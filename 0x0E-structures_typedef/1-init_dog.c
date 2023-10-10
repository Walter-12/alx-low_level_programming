#include "dog.h"
/**
 * init_dog - function to initialize a variable
 * @dog: structure
 * @d: pointer
 * @name: pointer to a char
 * @age: float type
 * @owner: pointer
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
