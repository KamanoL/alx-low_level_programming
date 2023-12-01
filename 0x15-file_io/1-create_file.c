#include "main.h"

/**
 * create_file - makes a file
 * @filename: pointer to file to made
 * @text_content: pointer to string
 * Return: -  1 if faled else 1
 */

int create_file(const char *filename, char *text_content)
{
	int a, dd, length = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (length = 0; text_content[length];)
			length++;
	}
	dd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	a = write(dd, text_content, length);

	if (dd == -1 || a == -1)
		return (-1);

	close(dd);
	return (1);
}
