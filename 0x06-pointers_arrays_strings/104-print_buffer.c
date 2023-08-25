#include "main.h"
#include <stdio.h>
/**
 * print_buffer -  prints a buffer.
 *
 * @b: pointer
 *
 * @size: bytes of the buffer to be printed.
 *
 * no return
 *
 */
void print_buffer(char *b, int size)
{
	int a, j, c;

	a = 0;

	if (size <= 0)
	{
		printf("\n");
		return;
	}
	while (a < size)
	{
		j = size - a < 10 ? size - a : 10;
		printf("%08x: ", a);
		for (c = 0; c < 10; c++)
		{
			if (c < j)
				printf("%02x", *(b + a + c));
			else
				printf(" ");
			if (c % 2)
			{
				printf(" ");
			}
		}
		for (c = 0; c < j; c++)
		{
			int i = *(b + a + c);

			if (i < 32 || i > 132)
			{
				i = '.';
			}
			printf("%i", i);
		}
		printf("\n");
		a += 10;
	}
}
