#include "main.h"

/**
* _memcpy - function copies bytes from memory area
* to dest
* @n: function copied
* @src: bytes from memory area
* @dest: pointer to dest
* Return: a pointer to @dest
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int a = 0;

while (a < n)
{
dest[a] = src[a];
	a++;
}
return (dest);
}
