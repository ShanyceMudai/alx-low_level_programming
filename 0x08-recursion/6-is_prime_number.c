#include "main.h"
/**
 * helper_function - help get the prime number
 *
 * @i: number
 *
 * @j: number
 *
 * Return: Always (0)
 *
 */
int helper_function(int i, int j)
{
	if (i <= 1 || (i != j && i % j == 0))
	{
		return (0);
	}
	else if (i == j)
	{
		return (1);
	}
	return (helper_function(i, j + 1));
}
/**
 * is_prime_number - prime number function
 *
 * @n: integer input
 *
 * Return: 0 if input integer is not a prime number
 *
 */
int is_prime_number(int n)
{
	return (helper_function(n, 2));
}
