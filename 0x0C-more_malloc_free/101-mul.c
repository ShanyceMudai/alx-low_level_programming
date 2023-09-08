#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include<ctype.h>

#define ERR_MSG "Error"

/**
 * isDigit - checks if a string contains a non digit character
 *
 * @s: string
 *
 * Return: 0 if a non digit is found
 */
int isDigit(char s)
{
	int i = 0;

	while (s[i])
	{
		if (s[i] < '0' || s[i] > '9')
		{
			return (0);
		}
		i++;
	}
	return (1);
}
/**
 * stringLength - function to give the length of a string
 *
 * @s: string to get length
 *
 * Return: length of the string
 */
int stringLength(char *s)
{
	int length = 0;

	while (s[length] != '\0')
	{
		length++;
	}
	return (length);
}
/**
 * errors - prints the errors*
 */
void errors(void)
{
	printf("Error\n");
	exit(98);
}
/**
 * main - multiplies two positive numbers.
 *
 * @argc: count of parameters passed to the terminal
 *
 * @argv: array of pointers
 *
 * Return: Always (0)
 */
int main(int argc, char *argv[])
{
	int *s1, *s2;
	int length1, length2, length, i, rem, n1, n2, *result, a = 0;

	s1 = atoi(argv[1]), s2 = atoi(argv[2]);
	if (argc != 3 || !isDigit(s1) || !isDigit(s2))
		errors();
	length1 = stringLength(s1);
	length2 = stringLength(s2);
	length = length1 + length2 + 1;
	result = malloc(sizeof(int) * length);
	if (result == NULL)
		return (1);
	for (i = 0; i <= length1 + length2; i++)
		result[i] = 0;
	for (length1 = length1 - 1; length1 >= 0; length1--)
	{
		n1 = s1[length1] - '0';
		rem = 0;
		for (length2 = length2 - 1; length2 >= 0; length2--)
		{
			n2 = s2[length2] - '0';
			rem += result[length1 + length2 + 1] + (n1 * n2);
			result[length1 + length2 + 1] = rem % 10;
			rem = rem / 10;
		}
		if (rem > 0)
			result[length1 + length2 + 1] += rem;
	}
	for (i = 0; i < length - 1; i++)
	{
		if (result[i])
			a = 1;
		if (a)
			_putchar(result[i] + '0');
	}
	if (!a)
		_putchar('0');
	_putchar('\n');
	free(result);
	return (0);
}
