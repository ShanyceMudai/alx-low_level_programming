#include "variadic_functions.h"
/**
 * print_strings - prints strings
 *
 * @separator: string to be printed between the strings
 *
 * @n: number of strings passed to the function
 *
 * Return: no return
 *
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int a;
	char *str;

	va_list bag;

	va_start(bag, n);
	for (a = 0; a < n; a++)
	{
		str = va_arg(bag, char *);
		if (str == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", str);
		}
		if (a != (n - 1) && separator != NULL)
		{
			printf("%s", separator);
		}
	}
		printf("\n");
		va_end(bag);
}

