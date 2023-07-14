#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (Success)
*/

int main(void)
{
	int t = 122;

	while (t >= 97)
	{
		putchar(t);
		t--;
	}
	putchar('\n');
	return (0);
}
