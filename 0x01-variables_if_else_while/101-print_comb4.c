#include <stdio.h>
/**
 * main - dispaly combination of 3 digit  number
 *
 * Return: always (0)
 *
 */
int main(void)
{
	int a = '0';

	while (a <= '9')
	{
		int b = '0';

		while (b <= '9')
		{
			int c = '0';

			while (c <= '9')
			{
				if (a < b && b < c)
				{
					putchar(a);
					putchar(b);
					putchar(c);
					if (a != '7')
					{
						putchar(',');
						putchar(' ');
					}
				}
				c++;
			}
			b++;
		}
		a++;
	}
	putchar('\n');
	return (0);
}
