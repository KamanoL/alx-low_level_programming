#include <stdlib.h>
#include "main.h"

/**
 * read_textfile - reads files to printout
 * @filename: file to read
 * @letters: amount of letters to read
 * Return: amount of bytes read and printed
 * 0 if failes else NULL
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buff;

	ssize_t ff;
	ssize_t a;
	ssize_t k;

	ff = open(filename, O_RDONLY);
	if (ff == -1)
		return (0);

	buff = malloc(sizeof(char) * letters);
			k = read(ff, buff, letters);
			a = write(STDOUT_FILENO, buff, k);

	free(buff);
	close(ff);
	return (a);
}
