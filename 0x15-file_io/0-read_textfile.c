#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - gets information from file to print
 * @filename: file to be read
 * @letters: amount of letters to count
 * Return: number of bytes
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t dd;
	char *buff;
	ssize_t a;
	ssize_t l;

	dd = open(filename, O_RDONLY);
	if (dd == -1)
		return (0);

	buff = malloc(sizeof(char) * letters);
	a = read(dd, buff, letters);
	l = write(STDOUT_FILENO, buff, a);

	free(buff);
	close(dd);
	return (l);
}
