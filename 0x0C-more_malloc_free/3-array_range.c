#include "main.h"
#include <stdlib.h>
/**
 * *array_range - creates an array of integers.
 *
 * @min: minimum value of the array
 *
 * @max: maximum value of the array
 *
 * Return: the pointer to the newly created array
 *
 */
int *array_range(int min, int max)
{
	int a, length;
	int *ptr;

	if (min > max)
	{
		return (NULL);
	}
	length = max - min + 1;
	ptr = malloc(sizeof(int) * length);
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (a = 0; a < length; a++)
	{
		ptr[a] = min;
		min++;
	}
	return (ptr);
}
