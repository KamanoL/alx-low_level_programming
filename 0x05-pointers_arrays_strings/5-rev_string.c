#include "main.h"

/**
 * rev_string - function that writes a function in reverse
 * @s: input string
 * Rehturn: String in reverse
 */

void rev_string(char *s)
{
	char rev = s[0];
	int counter = 0;
	int t;

	while (s[counter] != '\0')
		counter++;
	for (t = 0; t < counter; t++)
	{
		counter--;
		rev = s[t];
		s[t] = s[counter];
		s[counter] = rev;
	}
}
