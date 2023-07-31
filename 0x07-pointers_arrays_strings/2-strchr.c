#include "main.h"

/**
* _strchr - locates character in a string
* @s: the string to be shearched
* @c: the character to be located
* Return: a pointer to the first occurance - if c is found
* if c is not found - null
*/

char *_strchr(char *s, char c)
{
int index;
for (index = 0; s[index] >= '\0'; index++)
{
if (s[index] == c)
return (s + index);
}
return ('\0');
}
