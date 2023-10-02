#include "main.h"

/**
 * create_file - function that creates a file.
 * @filename:  pointer to the name of the file to be created
 * @text_content: pointer to a string to be writen on the file.
 *
 * Return: 1 for success and -1 if it fails
 */
int create_file(const char *filename, char *text_content)
{
	int f, wrt, leng = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (leng = 0; text_content[leng];)
			leng++;
	}

	f = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	wrt = write(f, text_content, leng);

	if (f == -1 || wrt == -1)
		return (-1);

	close(f);

	return (1);
}

