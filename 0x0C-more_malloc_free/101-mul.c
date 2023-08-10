#include <stdio.h>
#include <stdlib.h>

/**
 * is_digit_string - tells if string consits of digits
 * @str: pointer
 * Return: 0 if (Success) else 1 if fail
 */

int is_digit_string(const char *str)
{
	while (*str)
	{
	if (*str < '0' || *str > '9')
	{
		return (0);
	}
	str++;
	}
	return (1);
}

/**
 * main - entry point
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 (Success)
 */

int main(int argc, char *argv[])
{
	unsigned long  int num1, num2, result;

	if (argc != 3)
	{
		printf("Error\n");
		return (98);
	}
	if (!is_digit_string(argv[1]) || !is_digit_string(argv[2]))
	{
		printf("Error\n");
		return (98);
	}
		num1 = strtoull(argv[1], NULL, 10);
		num2 = strtoull(argv[2], NULL, 10);
		result = num1 * num2;

		printf("%lu\n", result);
		return (0);
}
