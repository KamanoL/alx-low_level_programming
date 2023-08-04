#include <stdio.h>
#include <stdlib.h>

/**
 * main - a program that multiplies two numbers
 * @argc: number of comandline arguments
 * @argv: number variables
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	if (argc - 1 != 2)
	{
		printf("Error\n");
	return (1);
	}
	else
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	}
	return (0);
}
