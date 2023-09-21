#include "lists.h"
list_t *create_node(const char *str);
size_t len(const char *str);
/**
 * *add_node_end - adds a new node at the end of list
 *
 * @head: pointer variable
 *
 * @str: string
 *
 * Return: address of new element
 *
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *tmp;
	list_t *newnode;

	tmp = *head;
	if (head == NULL)
	{
		return (NULL);
	}
		newnode = create_node(str);
	if (newnode == NULL)
	{
		return (NULL);
	}
	if (*head == NULL)
	{
		*head = newnode;
		return (*head);
	}
	while (tmp->next != NULL)
		tmp = tmp->next;
	tmp->next = newnode;
	return (*head);
}

/**
 * create_node - function that creates node
 *
 * @str: string
 *
 * Return: pointer to memory
 *
 */
list_t *create_node(const char *str)
{
	list_t *newnode;

	newnode = malloc(sizeof(list_t));
	if (newnode == NULL)
		return (NULL);
	newnode->str = strdup(str);
	newnode->len = len(str);
	newnode->next = NULL;
	return (newnode);
}

/**
 * len - gets length of a string
 *
 * @str: string
 *
 * Return: length
 *
 */
size_t len(const char *str)
{
	int a;

	if (str == NULL)
	{
		return (0);
	}
	a = 0;
	while (str[a] != '\0')
	{
		a++;
	}
	return (a);
}
