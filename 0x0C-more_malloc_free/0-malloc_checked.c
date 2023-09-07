#include "main.h"
#include <stdlib.h>
/**
 * *malloc_checked - allocates memory using malloc.
 *
 * @b: integer to be assigned memory
 *
 * Return: no return
 *
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(sizeof(int) * b);

	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}
