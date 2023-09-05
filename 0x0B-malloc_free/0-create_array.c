#include "main.h"
#include <stdlib.h>
/**
 * *create_array - creates an array of chars
 *
 * @size: amount of space for the string
 *
 * @c:specific character to be initialized
 *
 * Return: NULL if it fails
 *
 */
char *create_array(unsigned int size, char c)
{
	unsigned int x;
	char *ptr;

	if (size == 0)
	{
		return (NULL);
	}
	ptr = malloc(sizeof(char) * size);
	if (ptr == NULL)
	{
		return (NULL);
	}

	for (x = 1; x <= size; x++)
	{
		ptr[x] = c;
	}
	return (ptr);
}


