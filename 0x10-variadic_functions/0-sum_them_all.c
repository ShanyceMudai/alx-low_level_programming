#include "variadic_functions.h"
/**
 * sum_them_all - sum of all its parameters.
 *
 * @n: number of arguments
 *
 * Return: sum of the arguments
 *
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int a;
	unsigned int sum = 0;

	va_list i;

	va_start(i, n);

	for (a = 0; a < n; a++)
	{
		if (n == 0)
		{
			return (0);
		}
		else
		{
			sum = sum + va_arg(i, const unsigned int);
		}
	}
	va_end(i);

	return (sum);
}
