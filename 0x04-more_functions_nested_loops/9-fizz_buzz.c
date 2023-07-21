#include <stdio.h>

/**
 * main - prints numbers from 1 to 100 then a new line
 * then prints multiples of three but as fizz
 * and with the multiuples of two prints buzz
 * Return: Always 0 (Success)
 */

int main(void)
{
	int k;

	for (k = 1; k <= 100; k++)
	{
		if (k % 3 == 0 && k % 5 != 0)
		{
			printf("Fizz");
			printf(" ");
		}
		else if (k % 5 == 0 && k % 3 != 0)
		{
			printf("Buzz");
			printf(" ");
		}
		else if (k % 3 == 0 && k % 5 == 0)
		{
			printf("FizzBuzz");
			printf(" ");
		}
		else if (k == 1)
		{
			printf("%d", k);
			printf(" ");
		}
		else
		{
			printf("%d", k);
			printf(" ");
		}
	}
	printf("\n");

	return (0);
}
