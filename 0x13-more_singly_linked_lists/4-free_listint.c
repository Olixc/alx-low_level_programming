#include "lists.h"

/**
 * free_listint - free the memory of list.
 * @head: list to free;
 *
 * Return: nothing.
 */
void free_listint(listint_t *head)
{
	listint_t *ptr;

	while (head != NULL)
	{
		ptr = head->next;
		free(head);
		head = ptr;
	}
}
