#include "main.h"
/**
 * main - display _putchar
 *
 * Return: always (0)
 *
 */
int main(void)
{
	int a;
	char c[] = "_putchar";

	for (a = 0; a <= 7; a++)
	{
		_putchar(c[a]);
	}
	_putchar('\n');
	return (0);
}
