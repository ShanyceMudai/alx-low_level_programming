#include "main.h"
#include <stddef.h>

/**
 * binary_to_uint - converts a binary number to an unsigned int.
 *
 * @b: pointer to a string of 0 and 1 characters
 *
 * Return: the converted number
 *
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int length, a, j, sum, power;
	int base;

	base = 2;
	power = 1;
	sum = 0;

	if (b == NULL)
		return (0);
	for (length = 0; b[length] != '\0'; length++)
		;
	if (length == 1 && (b[0] == '0' || b[0] == '1'))
		return (b[0] - 48);
	for (a = 0; b[a] != '\0'; a++)
	{
		if (b[a] != '0' && b[a] != '1')
			return (0);
		for (j = length - 1; j > 0; j--)
			power = power * base;
		sum = sum + (power * (b[a] - 48));
		length--;
		power = 1;
	}
	return (sum);
}
