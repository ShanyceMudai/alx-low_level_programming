#include "main.h"

/**
 * get_endianness - gets endianness
 *
 * Return: 0 if big endian, 1 if small endian
 *
 */
int get_endianness(void)
{
	int n;
	char *b;

	b = (char *)&n;
	n = 1;

	if (*b == 1)
		return (1);
	else
		return (0);
}
