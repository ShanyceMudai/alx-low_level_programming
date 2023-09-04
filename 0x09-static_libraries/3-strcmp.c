#include "main.h"
/**
 * _strcmp - compares two strings.
 *
 * @s1: string to be compared
 *
 * @s2: string 2 to be compared
 *
 * Return: based on the comparision
 *
 */
int _strcmp(char *s1, char *s2)
{
	int a;
	int b = 0;

	for (a = 0; s1[a] != '\0' && b == 0; a++)
	{
		b = s1[a] - s2[a];
	}
	return (b);
}
