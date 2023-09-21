#include "lists.h"
size_t strlen(const char *str);
/**
 * *add_node - adds a new node
 *
 * @head: pointer variable
 *
 * @str: string
 *
 * Return: address of the new element
 *
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *newnode;

	if (head == NULL)
	{
		return (NULL);
	}
	newnode = malloc(sizeof(list_t));
	if (newnode == NULL)
	{
		return (NULL);
	}
	if (*head == NULL)
	{
		newnode->next = NULL;
	}
	else
			newnode->next = *head;
		newnode->str = strdup(str);
		newnode->len = len(str);
		*head = newnode;
		return (*head);
}

/**
 * len - calculates length of string
 *
 * @str: string
 *
 * Return: length of string
 *
 */
size_t len(const char *str)
{
	int a;

	if (str == NULL)
		return (0);
	a = 0;

	while (str[a] != '\0')
	{
		a++;
	}
	return (a);
}
