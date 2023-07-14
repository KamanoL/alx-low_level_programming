#include <stdio.h>
/**
 * main - 'Hexidecimal numbers in base 16'
 * return: Always 0
*/
int main(void)
{
	int n;
	int k;

	for (n = 48; n <= 57; n++)
	{
		putchar(n);
	}
	for (k = 97; k <= 102; k++)
	{
		putchar(k);
	}
	putchar('\n');
	return (0);
}
