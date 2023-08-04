#include <stdio.h>

/**
 * main - prints the name of a file
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	if (argc > 0)
		printf("%s\n", argv[0]);
	return (0);
}
