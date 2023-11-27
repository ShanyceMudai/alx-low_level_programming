#include "main.h"

/**
 * read_textfile - reads a text file and prints
 * it to the POSIX standard output.
 *
 * @filename: name of the file
 *
 * @letters: number of letters it should read and print
 *
 * Return: actual number of letters it could read and print
 *
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t rd, wr;
	char *bf;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	bf = malloc(sizeof(char) * (letters));
	if (bf == NULL)
		return (0);

	rd = read(fd, bf, letters);
	wr = write(STDOUT_FILENO, bf, rd);

	close(fd);

	free(bf);

	return (wr);
}
