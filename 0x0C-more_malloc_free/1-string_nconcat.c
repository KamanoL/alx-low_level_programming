#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - links twos trings
 * @s1: first string
 * @s2: second string
 * @n: amount of bytes
 * Return: poinyer to allocated memory if failes else
 * value is 98
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *sout;
	unsigned int ts1, ts2, tsout, k;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (ts1 = 0; s1[ts1] != '\0'; ts1++)
		;

	for (ts2 = 0; s2[ts2] != '\0'; ts2++)
		;

	if (n > ts2)
		n = ts2;
	tsout = ts1 + n;
	sout = malloc(tsout + 1);

	if (sout == NULL)
		return (NULL);

	for (k = 0; k < tsout; k++)

		if (k < ts1)
			sout[k] = s1[k];
		else
			sout[k] = s2[k - ts1];
	sout[k] = '\0';
	return (sout);
}
