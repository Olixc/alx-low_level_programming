#include "lists.h"

/**
 * delete_nodeint_at_index - delete node from a list at an index position.
 * @head: head of list.
 * @index: position to delete node from list.
 *
 * Return: 1 if it succeeded, -1 if it failed.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *ptr, *temp;
	unsigned int count;

	if (head == NULL || *head == NULL)
		return (-1);

	if (index == 0)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
		return (1);
	}

	count = 0;
	ptr = *head;

	while (ptr != NULL && count < index - 1)
	{
		ptr = ptr->next;
		count++;
	}

	if (ptr == NULL || ptr->next == NULL)
	{
		return (-1); /* out of range */
	}

	temp = ptr->next;
	ptr->next = temp->next;
	free(temp);

	return (1);
}
