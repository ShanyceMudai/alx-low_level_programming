#include "lists.h"
void freeList(listp_t **head);
/**
 * freeList - frees a linked list
 *
 * @head: head pointer
 *
 * no return
 *
 */
void freeList(listp_t **head)
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
 * print_listint_safe - prints a list
 *
 * @head: head pointer
 *
 * Return: number of nodes in the list
 *
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t nodes = 0;
	listp_t *ptr, *new, *add;

	ptr = NULL;
	while (head != NULL)
	{
		new = malloc(sizeof(listp_t));
		if (new == NULL)
			exit(98);
		new->p = (void *)head;
		new->next = ptr;
		ptr = new;

		add = ptr;

		while (add->next != NULL)
		{
			add = add->next;
			if (head == add->p)
			{
				printf("-> [%p] %d\n", (void *)head, head->n);
				freeList(&ptr);
				return (nodes);
			}
		}
		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
		nodes++;
	}
	freeList(&ptr);
	return (nodes);
}
