#include "main.h"

/**
 * flip_bits - returns the number of bits you would need to
 * flip to get from one number to another.
 *
 * @n: number
 *
 * @m: number two
 *
 * Return: returns the number of bits you would need to
 * flip to get from one number to another.
 *
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor, bt;

	xor = n ^ m, bt = 0;

	while (xor > 0)
	{
		bt = bt + (xor & 1);
		xor >>= 1;
	}
	{
		return (bt);
	}
	return (0);
}
