#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * op_add - adds a and b
 *
 * @a: first input
 *
 * @b: second input
 *
 * Return: sum of a and b
 *
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - returns difference of a and b
 *
 * @a: first input
 *
 * @b: second input
 *
 * Return: difference of a and b
 *
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - returns product of a and b
 *
 * @a: first input
 *
 * @b: second input
 *
 * Return: product of a and b
 *
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - returns the result of division
 *
 * @a: first input
 *
 * @b: second input
 *
 * Return: division of a and b
 *
 */
int op_div(int a, int b)
{
	return (a / b);
}
/**
 * op_mod - finds the remainder of the division of a and b
 *
 * @a: first input
 *
 * @b: second input
 *
 * Return: modulus of a and b
 *
 */
int op_mod(int a, int b)
{
	return (a % b);
}
