#include "main.h"
#include <stdlib.h>
/**
 * *str_concat - concatenates two strings.
 *
 * @s1: First string
 *
 * @s2: Second string
 *
 * Return: NULL on failure
 *
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int length1, length2, a, b;
	char *ptr;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	length1 = 0;
	while (s1[length1] != '\0')
	{
		length1++;
	}
	length2 = 0;
	while (s2[length2] != '\0')
	{
		length2++;
	}

	ptr = malloc(sizeof(char) * (length1 + length2 + 1));
	if (ptr == NULL)
	{
		free(ptr);
		return (NULL);
	}
	for (a = 0; a < length1; a++)
	{
		ptr[a] = s1[a];
	}
	for (b = 0; b <= length2; b++)
	{
		ptr[a] = s2[b];
		a++;
	}
	return (ptr);
}


