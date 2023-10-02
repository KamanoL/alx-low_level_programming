#include "main.h"

/**
 * append_text_to_file - adds text to a file
 * @filename: name the file to be used
 * @text_content: string
 *
 * Return: if NULL -1 else success 1
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int a, l, length = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (length = 0; text_content[length];)
			length++;
	}

	a = open(filename, O_WRONLY | O_APPEND);
	l = write(a, text_content, length);

	if (a == -1 || l == -1)
		return (-1);

	close(a);
	return (1);
}
