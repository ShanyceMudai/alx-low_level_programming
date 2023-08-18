#include "main.h"
/**
 * print_line - draws a straight line
 *
 * @n: number of times the character _ should be printed
 *
 * no return
 */
void print_line(int n)
{
	int a;

	for (a = 0; a < n; a++)
	{
		if (n > 0)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
