#include <stdio.h>
/**
 * main - We need both upper and lower case alphabets
 * Return: Always 0 (Success)
*/
int main(void)
{
	int t = 65;
	int c = 97;

	while (t <= 90)
	{
		putchar(t);
	}
	while (c <= 122)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
