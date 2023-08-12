#include <stdio.h>
/**
 * main - displays all possible combinations of two digits
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
			if (a < b)
			{
				putchar(a);
				putchar(b);
				if (a != '8' || (a == '8' && b != '9'))
				{
					putchar(',');
					putchar(' ');
				}
			}
			b++;
		}
		a++;
	}
	putchar('\n');
	return (0);
}
