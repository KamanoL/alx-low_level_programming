#ifndef DOG_H
#define DOG_H
#include <stdio.h>

/**
 * struct User - structure for the user to insert charecters
 * @name: name of object/animal
 * @age: age of the animal
 * @owner: name of the owner
 */

typedef struct User
{
	char name;
	float age;
	char owner;
} User;

/**
 * main - entry point
 * Return: 0 (Success)
 */

int main(void)
{
	struct User user;
	User user2;

	return (0);
}

#endif
