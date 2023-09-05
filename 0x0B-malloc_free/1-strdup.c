#include "main.h"
#include <stdlib.h>
/**
 * *_strdup - returns a pointer to a newly allocated space in memory
 *
 * @str: string to be duplicated
 *
 * Return: NULL if str = NULL
 *
 */
char *_strdup(char *str)
{
	unsigned int a;

	unsigned int b;

	char *ptr;

	if (str == NULL)
	{
		return (NULL);
	}

	a = 0;

	while (str[a] != '\0')
	{
		a++;
	}

	ptr = malloc(sizeof(char) * (a + 1));
	if (ptr == NULL)
	{
		return (NULL);
	}

	b = 0;

	while (b < a)
	{
		ptr[b] = str[b];
		b++;
	}
	return (ptr);
}
