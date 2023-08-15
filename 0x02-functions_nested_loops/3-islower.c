#include "main.h"
/**
 * _islower -  checks for lowercase character
 *
 * Return: (1) if c is lower otherwise (0)
 *
 * @c: gets the alphabets
 *
 */
int _islower(int c)
{
	char x;
	int lower = 0;

	for (x = 'a'; x <= 'z'; x++)
	{
		if (x == c)
		{
			lower = 1;
		}
		return (lower)
	}
}
