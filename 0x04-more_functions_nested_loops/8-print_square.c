#include "main.h"
/**
 * print_square - prints a square
 *
 * @size: size of the square
 *
 * no return
 *
 */
void print_square(int size)
{
	int a, j;

	if (size > 0)
	{
		for (a = 0; a < size; a++)
		{
			for (j = 0; j < size; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
