#include "main.h"
/**
 * puts_half -  prints half of a string
 *
 * @str: string
 *
 * no return
 *
 */
void puts_half(char *str)
{
	int length = 0;
	int middle, i;

	while (str[length] != '\0')
	{
		length++;
	}

	middle = (length - 1) / 2;

	for (i = (middle + 1); i < length; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
