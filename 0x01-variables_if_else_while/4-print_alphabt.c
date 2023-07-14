#include <stdio.h>
/**
 * main - alphabets  in lower case exceot q and e
 * Return: Always 0 (Success)
*/
int main(void)
{
	int k = 97;

	while (k <= 122)
	{
		if (k == 101 || k == 113)
		{
			k++;
			continue;
		}
		putchar(k);
		k++;
	}
	putchar('\n');

	return (0);

}
