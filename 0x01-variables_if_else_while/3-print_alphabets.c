#include <stdio.h>
/**
 * main - We need both upper and lower case alphabets
 * Return: Always 0 (Success)
*/
int main(void)
{
	int t = 97;
	int c = 65;

	while (t <= 122)
	{
		putchar(t);
		t++;
	}
	while (c <= 90)
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
