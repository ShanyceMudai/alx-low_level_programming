#include "lists.h"
listint_t *createNode(int n);
/**
 * createNode - creates a new node
 *
 * @n: integer
 *
 * Return: pointer to the node
 *
 */
listint_t *createNode(int n)
{
	listint_t *newnode;

	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
		return (NULL);
	newnode->n = n;
	newnode->next = NULL;

	return (newnode);
}

/**
 * *insert_nodeint_at_index - inserts node at an index
 *
 * @head: head pointer
 *
 * @idx: index where the node is to be inserted
 *
 * @n: integer
 *
 * Return: address of the new node
 *
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int a;
	listint_t *temp;
	listint_t *temp_old;
	listint_t *newnode;

	temp = *head;
	if (head == NULL)
		return (NULL);
	newnode = createNode(n);
	if (newnode == NULL)
		return (NULL);
	if (*head == NULL)
	{
		*head = newnode;
		return (newnode);
	}
	if (idx == 0)
		*head = newnode;
	for (a = 0; a < idx - 1 && temp != NULL && idx != 0; a++)
		temp = temp->next;
	if (temp == NULL)
		return (NULL);
	if (idx == 0)
		newnode->next = temp;
	else
	{
		temp_old = temp->next;
		temp->next = newnode;
		newnode->next = temp_old;
	}
	return (newnode);
}

