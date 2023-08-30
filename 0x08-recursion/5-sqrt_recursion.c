#include "main.h"
/**
 * sqrt_num - return square root of a number
 *
 * @i: integer
 *
 * @j: square root
 *
 * Return: Always (0)
 *
 */
int sqrt_num(int i, int j)
{
	if (j * j == i)
	{
		return (j);
	}
	else if (j * j > i)
	{
		return (-1);
	}
	return (sqrt_num(i, j + 1));
}
/**
 * _sqrt_recursion - returns the natural square root of a number.
 *
 * @n: integer
 *
 * Return: Always (0)
 *
 */
int _sqrt_recursion(int n)
{
	return (sqrt_num(n, 0));
}
