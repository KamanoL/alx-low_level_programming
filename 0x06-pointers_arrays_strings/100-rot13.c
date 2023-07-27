#include "main.h"
#include <stdio.h>

/**
 * rot13 - encodes a string
 * @n: pointer to string
 * @data1: result
 * @datarot: result
 * Return: *n
 */

char *rot13(char *n)
{
	int l, k;
	char data1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";

	char datarot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (l = 0; n[l] != '\0'; l++)
	{
		for (k = 0; k < 53; k++)
		{
			if (n[l] == data1[k])
			{
				n[l] = datarot[k];
				break;
			}
		}
	}
	return (n);
}
