#include "main.h"

/**
 * append_text_to_file - a function that appends text at the end of a file.
 * @filename: pointer to the name of the file.
 * @text_content: NULL terminated string to add to the end of the file.
 *
 * Return: 1 for success, -1 if it fails
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int x, wr, leng = 0;

	if (filename == NULL)
	{
		return (-1);
	}

	if (text_content != NULL)
	{
		for (leng = 0; text_content[leng];)
			leng++;
	}

	x = open(filename, O_WRONLY | O_APPEND);
	wr = write(x, text_content, leng);

	if (x == -1 || wr == -1)
		return (-1);

	close(x);

	return (1);
}

