#include <stdio.h>
/**
* main - Entry point
*Return: Always 0 (Success)
*/

int main(void)
{
	int a = '0';
	int k = '0';
	int t = '0';

	while (a <= '7', a++)
		{
		while (k <= '8', k++)
			{
			while (t <= '9', t++)
				{
				if (a < k && k < t && a < t)
					{
					putchar('0');
					putchar('1');
					putchar('2');
					if (!(a == '7' && k == '8' && t == '9'))
					{
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
