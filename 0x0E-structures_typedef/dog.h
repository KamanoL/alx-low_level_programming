#ifndef DOG_H
#define DOG_H

/**
 * struct dog - initialize viariable of type dog struct
 * @name: name to be initialized
 * @age: age to be initialized
 * @owner: owner to initialize
 */

struct dog
{
	char  *name;
	float  age;
	char  *owner;

};

/*
 * dog_t - typedef for dog structure
 */

typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
void print_dog(struct dog *d);
void *_strcpy(char *dest, char *src);

#endif
