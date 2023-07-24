#include "main.h"

/**
 * print_rev - function that prints from back to front
 * @s: string
 * Return: Always 0 (Success)
 */

void print_rev(char *s)
{
	int longt = 0;

	int o;

	while (*s != '\0')
	{
		longt++;
		s++;
	}
	s--;
	for (o = longt; o > 0; o--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
