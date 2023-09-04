#include "main.h"
/**
 * _isalpha -  checks for alphabetic character
 *
 * Return: 1 if c is a letter, lowercase or uppercase
 *
 *@c: display alphabets
 */
int _isalpha(int c)
{
	char l;
	char u;
	int letter = 0;

	for (l = 'a'; l <= 'z'; l++)
	{
		for (u = 'A'; u <= 'Z'; u++)
		{
			if (l == c || u == c)
			{
				letter = 1;
			}
		}
	}
	return (letter);
}
