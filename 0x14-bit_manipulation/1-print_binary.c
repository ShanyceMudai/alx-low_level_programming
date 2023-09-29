#include "main.h"
void printB(unsigned long int n);
/**
 * printB - function to perform recursion
 *
 * @n: integer to undergo recursion
 *
 * no return
 *
 */
void printB(unsigned long int n)
{
	if (n == 0)
		return;
	printB(n >> 1);
	if ((n & 1) == 1)
		_putchar('1');
	if ((n & 1) == 0)
		_putchar('0');
}

/**
 * print_binary - prints the binary representation of a number.
 *
 * @n: integer to be converted
 *
 * no return
 *
 */
void print_binary(unsigned long int n)
{
	if (n == 0)
		_putchar('0');
	else
	{
		printB(n);
	}
}

