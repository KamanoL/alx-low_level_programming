#include <stdlib.h>
#include <stdio.h>
#include "main.h"

char *create_buffer(char *file);
void close_file(int fd);

/**
 * create_buffer - allocates bytes for buffer
 * @file: name of file stored by buffer
 * Return: pointer to allocated buffer
 */

char *create_buffer(char *file)
{
	char *buff;

	buff = malloc(sizeof(char) * 1024);

	if (buff == NULL)
	{
		dprintf(STDERR_FILENO, "Error: can't write to %s\n", file);
		exit(99);
	}

	return (buff);
}

/**
 * close_file - closes file
 * @fd: file descriptor
 */

void close_file(int fd)
{
	int a;

	a = close(fd);

	if (a == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - copies info on a file to the next
 * @argc: number of arguments
 * @argv: pointer to arguments
 * Return: 0 always (Success)
 */

int main(int argc, char *argv[])
{
	int frm, to, t, l;
	char *buff;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buff = create_buffer(argv[2]);
	frm = open(argv[1], O_RDONLY);
	t = read(frm, buff, 1024);
	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (frm == -1 || t == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			exit(98);
		}

		l = write(to, buff, t);
		if (to == -1 || l == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			free(buff);
			exit(99);
		}

		t = read(frm, buff, 1024);
		to = open(argv[2], O_WRONLY | O_APPEND);

	} while (t > 0);

	free(buff);
	close_file(frm);
	close_file(to);

	return (0);
}
