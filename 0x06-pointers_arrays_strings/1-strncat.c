#include "main.h"

/**
 * *_strncat - similar due to the fact that it also links
 * @dest: string
 * @src: string
 * @n: number of bytes from src
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int m;
	int s;

	m = 0;
	while (dest[m] != '\0')
	{
		m++;
	}
	s = 0;
	while (s < n && src[s] != '\0')
	{
		dest[m] = src[s];
		m++;
		s++;
	}
	dest[m] = '\0';
	return (dest);
}
