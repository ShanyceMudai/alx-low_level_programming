#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index.
 *
 * @index: index of the bit you want to get
 *
 * @n: integer to be converted to bits
 *
 * Return: value of bit at an index
 *
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int a;

	if (index > sizeof(unsigned int) * 8)
		return (-1);

	for (a = 0; a < index; a++)
		n = n >> 1;
	return ((n & 1));
}

