#include <stdio.h>
/**
 * main - combination of 2 two digit number
 *
 * Return: always (0)
 *
 */
int main(void)
{
	int n, i;
	int a, b, c, d;

	for (n = '0'; n <= 99; n++)
	{
		a = n / 10;
		b = n % 10;

		for (i = '0'; i <= 99; i++)
		{
			c = i / 10;
			d = i % 10;
			if (a < c || (a == c && b < d))
			{
				putchar(a + '0');
				putchar(b + '0');
				putchar(' ');
				putchar(c + '0');
				putchar(d + '0');

				if (a != '9' && b != '8')
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
