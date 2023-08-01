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
	int data;

	ptr = *head;
	data = 0;

	if (head == NULL || *head == NULL)
		return (0);

	if (ptr != NULL)
	{
		*head = ptr->next;
		data = ptr->n;
		free(ptr);
	}

	return (data);
}
