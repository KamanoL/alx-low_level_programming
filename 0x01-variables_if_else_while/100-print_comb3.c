#include <stdio.h>
/**
 * main - combo of two digit numbers
 * Return: Always 0 (Success)
*/

int main(void)
{
	int tens;
	int ones;

	for (tens = 0; tens <= 9; tens++)
	{
		putchar(tens + '0');
		putchar(ones + '0');
		if (tens < 8)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}