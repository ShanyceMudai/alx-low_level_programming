#include "variadic_functions.h"
/**
 * print_all - prints anything.
 *
 * @format: list of types of arguments passed to the function
 *
 * Return: no return
 *
 */
void print_all(const char * const format, ...)
{
	int a, checkstatus;
	char *str;
	va_list bag;

	va_start(bag, format);
	a = 0;

	while (format != NULL && format[a] != '\0')
	{
		switch (format[a])
		{
			case 'c':
				printf("%c", va_arg(bag, int));
				checkstatus = 0;
				break;
			case 'i':
				printf("%d", va_arg(bag, int));
				checkstatus = 0;
				break;
			case 'f':
				printf("%f", va_arg(bag, double));
				checkstatus = 0;
				break;
			case 's':
				str = va_arg(bag, char *);
				if (str == NULL)
					str = "(nil)";
				printf("%s", str);
				break;
			default:
				checkstatus = 1;
				break;
		}
		if (format[a + 1] != '\0' && checkstatus == 0)
			printf(", ");
		a++;
	}
	printf("\n");
	va_end(bag);
}
