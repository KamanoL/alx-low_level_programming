#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a = '0';
	int k = '0';
	int t = '0';

	while (a <= '7')
	{
		while (k <= '8')
		{
			while (t <= '9')
			{
				if (a < k && k < t)
				{
					putchar(a);
					putchar(k);
					putchar(t);

					if (!(a == '7' && k == '8' && t == '9'))
					{
						putchar(',');
						putchar(' ');
					}
				}
				t++;
			}
			t = '0';
			k++;
		}
		k = '0';
		a++;
	}

	putchar('\n');
	return (0);
}
