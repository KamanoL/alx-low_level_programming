#include <stdio.h>
/**
 * main - posible combination of numbers
 * Return: Always 0 (Success)
*/

int main(void)
{
	int t;
	int c;
	int l;

	for (t = 48; t < 58; t++)
	{
		for (c = 48; c < 58; c++)
		{
			if (c > t)
			{
				for (l = 48; l < 58; l++)
				{
					if (l > t)
					{
					putchar(t);
					putchar(c);
					putchar(l);
					if (t == 55 && c == 56 && l == 57)
					{
						break;
					}
					putchar(',');
					putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
