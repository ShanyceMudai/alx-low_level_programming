#include <stdio.h>
/**
 * main - display all single digit numbers of base 10
 *
 * Return: always (0)
 *
 */
int main(void)
{
	char n = '0';

	while (n <= '9')
	{
		putchar(n);
		n++;
	}
	putchar('\n');
	return (0);
}
