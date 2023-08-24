#include "main.h"
/**
 * reverse_array - reverses the content of an array of integers
 *
 * @n: number of elements of the array
 *
 * @a: pointer variable
 *
 * no return
 *
 */
void reverse_array(int *a, int n)
{
	int x, temp;

	x = 0;

	n = n - 1;

	for (x = 0; x < n; x++)
	{
		temp = a[x];
		a[x] = a[n];
		a[n] = temp;
		n--;
	}
}
