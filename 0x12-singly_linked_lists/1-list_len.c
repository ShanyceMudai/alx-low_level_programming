#include "lists.h"
/**
 * list_len - returns the number of element
 *
 * @h: head of the list
 *
 * Return: number of elements
 *
 */
size_t list_len(const list_t *h)
{
	int a;

	if (h == NULL)
	{
		return (0);
	}
	for (a = 1; h->next != NULL; a++)
	{
		h = h->next;
	}
	return (a);
}
