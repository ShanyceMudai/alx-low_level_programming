#include "main.h"
/**
 * swap_int - swaps the values of two integers.
 *
 * @a: value to be swaped
 *
 * @b: value to be swaped
 *
 * no return
 *
 */
void swap_int(int *a, int *b)
{
	int none;
	int *i = &none;

	*i = *a;
	*a = *b;
	*b = *i;
}
