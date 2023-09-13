#include "function_pointers.h"
/**
 * array_iterator - executes a function given as a parameter
 *
 * @array: array to be iterated
 *
 * @size: size of the array
 *
 * @action: pointer to the function
 *
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int a;

	if (array == NULL || action == NULL)
	{
		return;
	}
	for (a = 0; a < size; a++)
	{
		action(*array);
		array++;
	}
}
