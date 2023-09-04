#include "main.h"
/**
 * *_strncat -  concatenates two strings.
 *
 * @dest: string
 *
 * @src: string
 *
 * @n: n bytes from src
 *
 * Return: to dest string
 *
 */
char *_strncat(char *dest, char *src, int n)
{
	int length_dest, x;

	for (length_dest = 0; dest[length_dest] != '\0'; length_dest++)
	{

	}
	for (x = 0; src[x] != 0 && x < n; x++)
	{
		dest[length_dest + x] = src[x];
	}
	return (dest);
}
