#include "main.h"
/**
 * _isupper -  checks for uppercase character
 *
 * Return: (1) for uppercase and (0) for lowercase
 *
 * @c: interger value to be tested
 *
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
