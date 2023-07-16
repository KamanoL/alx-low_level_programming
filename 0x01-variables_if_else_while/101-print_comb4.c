#include <stdio.h>
/**
* main - Entry point
*Return: Always 0 (Success)
*/

int main(void)
{
	int a = '0';
	int k = '1';
	int t = '2';

	while (a <= '7')
		{
		while (k <= '8')
			{
			while (t <= '9')
				{
				if (a < k && k < t)
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
