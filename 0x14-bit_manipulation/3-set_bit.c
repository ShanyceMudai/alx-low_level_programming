#include "main.h"

/**
 * set_bit - set the value of a bit at a specific index
 * to 1
 *
 * @n: number whose binary bit is
 * to be set
 *
 * @index: index at which the number to
 * be set is.
 *
 * Return: 1 to indicate success
 *
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (8 * sizeof(unsigned long int)))
		return (-1);

	*n ^= (1 << index);

	return (1);
}
