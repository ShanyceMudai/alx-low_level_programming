#include "main.h"
#include <stdio.h>

/**
 * get_bit - gets the value of a bit at
 * an index
 *
 * @n: number which is converted to binary
 * to get its value
 *
 * @index: index which the binary bit value
 * is located
 *
 * Return: bit value
 *
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= (8 * sizeof(unsigned long int)))
		return (-1);
	if ((n & (1 << index)) == 0)
		return (0);
	else
		return (1);
}
