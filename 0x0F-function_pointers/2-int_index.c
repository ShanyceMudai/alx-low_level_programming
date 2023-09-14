#include "function_pointers.h"
/**
 * int_index - searches for an integer.
 *
 * @array: array to be searched
 *
 * @size: size of the array
 *
 * @cmp: function pointer
 *
 * Return: an integer
 *
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int a;

	if (array == NULL || cmp == NULL)
		return (-1);

	for (a = 0; a < size; a++)
	{
		if (cmp(array[a]) != 0)
			return (a);
	}
	return (-1);
}
