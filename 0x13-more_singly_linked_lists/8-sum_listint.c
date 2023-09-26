#include "lists.h"
/**
 * sum_listint - returns sum of all data in a list
 *
 * @head: head pointer
 *
 * Return: sum of the data
 *
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);
	while (head != NULL)
	{
		sum = sum + head->n;
		head = head->next;
	}
	return (sum);
}
