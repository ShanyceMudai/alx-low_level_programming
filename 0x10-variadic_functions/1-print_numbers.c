#include "variadic_functions.h"
/**
 * print_numbers - prints numbers
 *
 * @separator: string to be printed between numbers
 *
 * @n: number of integers passed to the function
 *
 * no return
 *
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int a, array;

	va_list bag;

	va_start(bag, n);

	for (a = 0; a < n; a++)
	{
		array = va_arg(bag, const unsigned int);
		printf("%d", array);
		if (a != (n - 1) && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	printf("\n");

	va_end(bag);
}
