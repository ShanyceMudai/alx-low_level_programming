#include "main.h"
/**
 * *_strcat - concatenates two strings
 *
 * @dest: string
 *
 * @src: string
 *
 * Return: dest
 *
 */
char *_strcat(char *dest, char *src)
{
	int length1, length2, x;

	for (length1 = 0; dest[length1] != '\0'; length1++)
	{

	}
	for (length2 = 0; src[length2] != '\0'; length2++)
	{

	}
	for (x = 0; x <= length2; x++)
	{
		dest[length1 + x] = src[x];
	}
	return (dest);
}

