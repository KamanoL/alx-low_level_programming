#include "main.h"

/**
* _strpbrk - searches any set of bytes in a string
* @s: the string to be searched for
* @accept: the set of bytes to searched
* Return: if a set ids matched - pointer to the matched byte
* if no set is matched - null
*/

char *_strpbrk(char *s, char *accept)
{
int index;
while (*s)
{
for (index = 0; accept[index]; index++)
{
if (*s == accept[index])
return (s);
}
s++;
}
return ('\0');
}
