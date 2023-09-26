#include "lists.h"
/**
 * *get_nodeint_at_index - returns node of a list at an index
 *
 * @head: head pointer
 *
 * @index: index for the node to be returned
 *
 * Return: NULL if the node does not exist
 *
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	for (i = 0; i < index; i++)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
	}
	return (head);
}
