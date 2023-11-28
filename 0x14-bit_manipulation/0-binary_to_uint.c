#include "main.h"

/**
 * binary_to_uint - converts a binary number to an
 * unsigned int
 * @b: pointer to a string of 0 and 1 chars
 *
 * Return: converted number
 *
 */
unsigned int binary_to_uint(const char *b)
{
	int index = 0;
	unsigned int number = 0;

	if (!b)
		return (0);
	for (; b[index]; index++)
	{
		if (b[index] < '0' || b[index] > '1')
			return (0);

		number = 2 * number + (b[index] - '0');
	}
	return (number);
}
