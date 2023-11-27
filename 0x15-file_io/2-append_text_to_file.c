#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file.
 *
 * @filename: name of the file
 *
 * @text_content: NULL terminated string to add at the end of the file
 *
 * Return: 1 on success and -1 on failure
 *
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, wr, i;

	i = 0;
	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		for (; text_content[i];)
			i++;
	}

	fd = open(filename, O_WRONLY | O_APPEND);
	wr = write(op, text_content, i);

	if (fd == -1 || wr == -1)
		return (-1);

	close(fd);

	return (1);
}
