#include "lists.h"

/**
 * pop_listint - deletes the first node of a list.
 * @head: head of the node.
 *
 * Return: head node’s data (n).
 */
int pop_listint(listint_t **head)
{
	listint_t *ptr;

	if (!head)
		return (0);

	ptr = (*head)->next;

	(*head)->n = 0;
	free(*head);

	*head = ptr;

	return ((*head)->n);
}
