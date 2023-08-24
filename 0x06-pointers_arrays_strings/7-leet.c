#include "main.h"
/**
 * *leet - encodes a string into 1337.
 *
 * @str: string
 *
 * Return: string
 *
 */
char *leet(char *str)
{
	int a, b;
	char c[] = "aAeEoOtTlL";
	char d[] = "4433007711";

	for (a = 0; str[a] != '\0'; a++)
	{
		for (b = 0; c[b] != '\0'; b++)
		{
			if (str[a] == c[b])
			{
				str[a] = d[b];
			}
		}
	}
	return (str);
}
