#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - creates a new dog
 * @name: name of dog
 * @age: of dog
 * @owner: owner name
 * Return: NULL if failed
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	int name1 = 0, owner1 = 0, t;
	dog_t *dog2;

	while (name[name1] != '\0')
		name1++;

	while (owner[owner1] != '\0')
		owner1++;

	dog2 = malloc(sizeof(dog_t));

	if (dog2 == NULL)
	{
		free(dog2);
		return (NULL);
	}
	dog2->name = malloc(name1 * sizeof(dog2->name));

	for (t = 0; t <= name1; t++)
		dog2->name[t] = name[t];

	dog2->age = age;
	dog2->owner = malloc(owner1 * sizeof(dog2->owner));

	if (dog2->owner == NULL)
	{
		free(dog2->name);
		free(dog2->owner);
		free(dog2);
		return (NULL);
	}
	for (t = 0; t <= owner1; t++)
		dog2->owner[t] = owner[t];
	return (dog2);
}
