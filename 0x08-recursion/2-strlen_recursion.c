#include "main.h"

/**
 * _strlen_recursion - calculates length of a string
 * @s: pointer
 * Return: length of a string
 */

int _strlen_recursion(char *s)
{
	int longit = 0;

	if (*s)
	{
		longit += _strlen_recursion(s + 1);
		longit++;
	}
	return (longit);
}
