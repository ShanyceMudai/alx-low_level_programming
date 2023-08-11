#include <stdio.h>
/**
 * main - display all possible combinations of single digit numbers
 *
 * Return: always (0)
 *
 */
int main(void)
{
	int digit = '0';

	while (digit <= 9)
	{
		putchar(digit);
		if (digit != 9)
		{
			putchar(',');
			putchar(' ');
		}
		digit++;
	}
	putchar('\n');
	return (0);
}

