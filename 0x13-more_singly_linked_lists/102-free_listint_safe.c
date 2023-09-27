#include "lists.h"
void freeList2(listp_t **head);
/**
 * freeList2 - frees a list
 *
 * @head: head pointer
 *
 * Return: no return
 *
 */
void freeList2(listp_t **head)
{
	listp_t *temp;
	listp_t *current;

	if (head != NULL)
	{
		current = *head;
		while ((temp = current) != NULL)
		{
			current = current->next;
			free(temp);
		}
		*head = NULL;
	}
}

/**
 * free_listint_safe - frees a list
 *
 * @h: head pointer
 *
 * Return: size of the list that was free'd
 *
 */
size_t free_listint_safe(listint_t **h)
{
	size_t nodes = 0;
	listp_t *ptr, *new, *add;
	listint_t *current;

	ptr = NULL;
	while (*h != NULL)
	{
		new = malloc(sizeof(listp_t));

		if (new == NULL)
			exit(98);
		new->p = (void *)*h;
		new->next = ptr;
		ptr = new;

		add = ptr;

		while (add->next != NULL)
		{
			add = add->next;
			if (*h == add->p)
			{
				*h = NULL;
				freeList2(&ptr);
				return (nodes);
			}
		}
		current = *h;
		*h = (*h)->next;
		free(current);
		nodes++;
	}

	*h = NULL;
	freeList2(&ptr);
	return (nodes);
}

