#include "main.h"

/**
 * flip_bits - returns the number of bits to be flipped to get
 * from one number to another
 *
 * @n: binary bits of a number
 *
 * @m: binary bits to be flipped
 *
 * Return: number of bits needed to be flipped
 * to get from one number to another
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
