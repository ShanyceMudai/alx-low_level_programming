#include "main.h"
#include <stdlib.h>
/**
 * *_realloc - reallocates a memory block
 *
 * @ptr: pointer to the memory previously allocated
 *
 * @old_size: previously allocated memory
 *
 * @new_size: new allocated memory
 *
 * Return: ptr when new_size = old_size
 *
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int a, more = new_size;
	char *nptr;
	char *optr = ptr;

	if (ptr == NULL)
	{
		nptr = malloc(new_size);
		return (nptr);
	}
	else if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	else if (new_size == old_size)
	{
		return (ptr);
	}
	nptr = malloc(new_size);
	if (nptr == NULL)
	{
		return (NULL);
	}
	if (new_size > old_size)
	{
		more = old_size;
	}
	for (a = 0; a < more; a++)
	{
		nptr[a] = optr[a];
	}
	free(ptr);
	return (nptr);
}
