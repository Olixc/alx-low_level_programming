#include "lists.h"

/**
 * free_listint - free the memory of list.
 * @head: list to free;
 *
 * Return: nothing.
 */
void free_listint(listint_t *head)
{
	while (head != NULL)
	{
		free(head);
		head = head->next;
	}
}
