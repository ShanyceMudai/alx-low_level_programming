#include "main.h"

/**
 * clear_bit - sets the value of a binary bit at
 * an index to 0
 *
 * @n: number whose binary bit value is to be set
 *
 * @index: specific index containing the binary
 * bit value to be set to 0
 *
 * Return: 1 to indicate success
 *
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	*n &= ~(1 << index);
	if (index >= (8 * sizeof(unsigned long int)))
		return (-1);
	else
		return (1);
}
