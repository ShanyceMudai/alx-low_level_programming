#include <stdio.h>
/**
 * main - display the lowercase alphabet in reverse
 *
 * Return: always (0)
 *
 */
int main(void)
{
	char alphabet = 'z';

	while (alphabet >= 'a')
	{
		putchar(alphabet);
		alphabet--;
	}
	putchar('\n');
	return (0);
}
