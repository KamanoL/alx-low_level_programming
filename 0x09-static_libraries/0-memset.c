#include "main.h"
/**
* _memset - fills memory with a constant byte
* @s : memory to fill
* @b: char to coppy
* @n: number of times to copy
* Return: s
*/
char *_memset(char *s, char b, unsigned int n)
{
unsigned int k;

for (k = 0; k < n; k++)
{
s[k] = b;
}
return (s);
}
