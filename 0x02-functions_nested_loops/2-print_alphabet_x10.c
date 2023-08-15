#include "main.h"
/**
 * print_alphabet_x10 - displays the alphabets 10 times
 *
 */
void print_alphabet_x10(void)
{
	char c;
	int a;

	for (a = 0; a < 10; a++)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
	}
}
