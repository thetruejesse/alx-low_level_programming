#include "dog.h"

/**
 * init_dog - function to initialize dog
 *
 * @d: dog type
 * @name: name initialized
 * @age: age of dog initialized
 * @owner: owner of dog initialized
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
