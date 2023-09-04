#include "main.h"

/**
 * append_text_to_file - adds text at the end of a file
 * @filename: pointer to name of file
 * @text_content: string to add at end of a file
 * Return: --1 if failed else -1
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int k, t, len = 0;

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	k = open(filename, O_WRONLY | O_APPEND);
	t = write(k, text_content, len);

	if (k == -1 || t == -1)
		return (-1);

	close(k);

	return (1);
}
