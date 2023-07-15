#include <stdio.h>
/**
 * maim - entry point
 * Return: Always 0 (Success)
*/
int main(void)
{
	int k;
	int j;

	for (k = 0; k < 100; k++)
	{
		for (j = 0; j < 100; j++)
		{
			if (j > k)
			{
				putchar(k / 10 + '0');
				putchar(k % 10 + '0');
				putchar(' ');
				putchar(j / 10 + '0');
				putchar(j % 10 + '0');

				if (k * 100 + j != 9899)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
