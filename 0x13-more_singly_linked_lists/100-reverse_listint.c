#include "lists.h"

/**
 * *reverse_listint - reverse a list.
 * @head: head pointer.
 *
 * Return: Pointer to the first node of the reversed list.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev_ptr, *next_ptr;

	prev_ptr = NULL;
	next_ptr = NULL;
	
	while (*head != NULL)
	{
		next_ptr = (*head)->next;
		(*head)->next = prev_ptr;

		prev_ptr = *head;
		*head = next_ptr;
	}

	*head = prev_ptr;
	return (*head);
}
