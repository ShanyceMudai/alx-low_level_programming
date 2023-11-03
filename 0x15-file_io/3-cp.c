#include "main.h"
#include <stdlib.h>
#include <stdio.h>

char *make_buffer(char *file);
void close_file(int fd);

/**
 * make_buffer - allocates bytes for a buffer to
 * be made
 *
 * @file: filename
 *
 * Return: pointer to the allocated buffer in memory
 *
 */
char *make_buffer(char *file)
{
	char *b; /* b for buffer */

	b = malloc(1024 * sizeof(char));
	if (b == NULL)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", file);
		exit(99);
	}

	return (b);
}

/**
 * close_file - closes file descriptor
 *
 * @fd: file descriptor
 *
 * Return: no return
 *
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
 * main - copies content of a file from it
 * to anothe file
 *
 * @argc: argument count
 *
 * @argv: argument vector
 *
 * Return: 0 to indicate success
 *
 * Description: If the number of arguments is not the correct
 * exit with code 97
 * If the from does not exist exit with code 98
 * If write to the file fails exit with code 99
 *
 */
int main(int argc, char *argv[])
{
	int from, to, rd, wr;
	char *b;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	b = make_buffer(argv[2]);
	from = open(argv[1], O_RDONLY);
	rd = read(from, b, 1024);
	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (from == -1 || rd == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from the file %s\n", argv[1]);
		free(b);
		exit(98);
		}

		wr = write(to, b, rd);
		if (to == -1 || wr == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argv[2]);
		free(b);
		exit(99);
		}
		rd = read(from, b, 1024);
		to = open(argv[2], O_WRONLY | O_APPEND);

	} while (rd > 0);

	free(b);
	close_file(from);
	close_file(to);

	return (0);
}
