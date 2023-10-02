#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *new_buffer(char *file);
void close_descriptor(int d);

/**
 * new_buffer - creates a buffer
 * @file: The file whose data is allocated to buffer
 *
 * Return: pointer to the new buffer after allocation.
 */
char *new_buffer(char *file)
{
	char *buff;

	buff = malloc(sizeof(char) * 1024);

	if (buff == NULL)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", file);
		exit(99);
	}

	return (buff);
}

/**
 * close_descriptor - function to close file descriptors.
 * @d: The file descriptor to close.
 */
void close_descriptor(int d)
{
	int cl;

	cl = close(d);

	if (cl == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", d);
		exit(100);
	}
}

/**
 * main - function that copies the contents of a file to another file.
 * @argc: number of arguments received the program.
 * @argv: An array of pointers to all the arguments.
 *
 * Return: 0 for success, otherwise:-
 *	if the number of argument is not the correct one, exit with code 97
 *	if file_from does not exist, or if you can not read it, exit with code 98
 *	if you can not create or if write to file_to fails, exit with code 99
 *	if you can not close a file descriptor , exit with code 100
 */
int main(int argc, char *argv[])
{
	int from, to, rd, wr;
	char *buff;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buff = new_buffer(argv[2]);
	from = open(argv[1], O_RDONLY);
	rd = read(from, buff, 1024);
	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	while (rd > 0)
	{
		if (from == -1 || rd == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argv[1]);
			free(buff);
			exit(98);
		}

		wr = write(to, buff, rd);
		if (to == -1 || wr == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argv[2]);
			free(buff);
			exit(99);
		}

		rd = read(from, buff, 1024);
		to = open(argv[2], O_WRONLY | O_APPEND);

	}

	free(buff);
	close_descriptor(from);
	close_descriptor(to);

	return (0);
}

