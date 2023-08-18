#include <stdio.h>
/**
 * main - finds and prints the largest prime factor
 *
 * Return: always (0)
 *
 */
int main(void)
{
	long int a, n, d;

	n = 612852475143;
	for (a = 1; a <= n; a++)
	{
		if (n % a == 0)
		{
			if (n == a)
			{
				printf("%ld\n", a);
				break;
			}
			d = n / a;
			n = d;
		}
	}

	return (0);
}
