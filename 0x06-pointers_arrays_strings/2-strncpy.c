#include "main.h"
/**
 * *_strncpy -  copies a string.
 *
 * @dest: string
 *
 * @src: string
 *
 * @n: number of bytes to be copied.
 *
 * Return: to dest
 *
 */
char *_strncpy(char *dest, char *src, int n)
{
	int x;

	for (x = 0; src[x] != '\0' && x < n; x++)
	{
		dest[x] = src[x];
	}
	for (x = x; x < n; x++)
	{
		dest[x] = '\0';
	}
	return (dest);
}

