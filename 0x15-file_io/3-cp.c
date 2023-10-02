#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include "main.h"

/**
 * main - duplicates a file to the next
 * @argc: file name
 * @argv: number of the letters used
 * Return: Always 0 (Success), else NULL
 */

int main(int argc, char *argv[])
{
	int origin, destination;
	ssize_t num;
	char buf[BUFF_SIZE];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	origin = open(argv[1], O_RDONLY);
	if (origin == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	destination = open(argv[2], O_CREAT | O_WRONLY, 0664);
	if (destination == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	while ((num = read(origin, buf, BUFF_SIZE)) > 0)
	{
		if (write(destination, buf, num) != num)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
	}
	if (num == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if ((close(origin) == -1) || (close(destination) == -1))
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", origin);
		exit(100);
	}
	exit(EXIT_SUCCESS);
}
