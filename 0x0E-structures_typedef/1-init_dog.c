#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - initialize variable of type struct dog
 * @d: pointer to struct dog
 * @name: mame to initialize
 * @age: age ti initialize
 * @owner: owner to initialize
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		(*d).name = name;
		(*d).age = age;
		(*d).owner = owner;
	}
}
