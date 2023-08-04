#include "main.h"

/**
 * _strcmp - compares strings
 * @s1: string
 * @s2: string
 * Return: s1[l] - s2[l]
 */

int _strcmp(char *s1, char *s2)
{
	int l;

	l = 0;

	while (s1[l] != '\0' && s2[l] != '\0')
	{
		if (s1[l] != s2[l])
		{
			return (s1[l] - s2[l]);
		}
		l++;
	}
	return (0);
}
