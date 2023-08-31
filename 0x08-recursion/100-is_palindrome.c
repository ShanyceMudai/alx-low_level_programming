#include "main.h"
#include <string.h>
/**
 * stringLength - function for string length
 *
 * @s: character string
 *
 * Return: number of characters in the string
 *
 */
int stringLength(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
		return (1 + stringLength(s + 1));
}

/**
 * compareCharacters - function to compare string characters
 *
 * @s: string whose characters are to be compared
 *
 * @left: first character on the left of string
 *
 * @right: last character
 *
 * Return: integer value that indicates the comparision result
 *
 */
int compareCharacters(char *s, int left, int right)
{
	if (*(s + left) == *(s + right))
	{
		if (left == right || left == right + 1)
			return (1);
		return (0 + compareCharacters(s, left + 1, right - 1));
	}
	return (0);
}

/**
 * is_palindrome - function for a palindrome string
 *
 * @s: string
 *
 * Return: (0) if string is not palindrome
 *
 */
int is_palindrome(char *s)
{
	if (*s == '\0')
	{
		return (1);
	}
	return (compareCharacters(s, 0, stringLength(s) - 1));
}
