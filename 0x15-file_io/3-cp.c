#include "main.h"
#include <stdlib.h>
#include <stdio.h>

char *creat_buff(char *file);
void end_file(int dd);

/**
 * creat_buff - allocates bytes
 * @file: name of file
 *
 * Return: allocated buffer pointer
 */

char *creat_buff(char *file)
{
	char *buff;

	buff = malloc(sizeof(char) * 1024);

	if (buff == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file);
		exit(99);
	}

	return (buff);
}

/**
 * end_file - ends file
 * @dd: file description
 *
 * Return: None
 */

void end_file(int dd)
{
	int a;

	a = close(dd);

	if (a == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close dd %d\n", dd);
		exit(100);
	}
}

/**
 * main - duplicates content of a fileto the next
 * @argc: argument count
 * @argv: argument vector
 * Return:0 Always (Success) else NULL
 */

int main(int argc, char *argv[])
{
	int to, frm, a, t;
	char *buff;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from_to\n");
		exit(97);
	}

	buff = creat_buff(argv[2]);
	frm = open(argv[1], O_RDONLY);
	a = read(frm, buff, 1024);
	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (frm == -1 || a == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			free(buff);
			exit(98);
		}

		t = write(to, buff, a);
		if (to == -1 || t == -1)
		{
			dprintf(STDERR_FILENO, "Error: Cant't write to %s\n", argv[2]);
			free(buff);
			exit(99);
		}

		a = read(frm, buff, 1024);
		to = open(argv[2], O_WRONLY | O_APPEND);

	} while (a > 0);

	free(buff);
	close(frm);
	close(to);

	return (0);
}
