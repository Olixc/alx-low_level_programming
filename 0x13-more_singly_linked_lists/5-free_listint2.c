#include "lists.h"

/**
 * free_listin2 - free a list.
 * @head: head node of a list.
 *
 * Return: nothing.
 */
void free_listint2(listint_t **head)
{
	listint_t *ptr;
	while (*head != NULL)
	{
		ptr = (*head)->next;
		free(*head);
		*head = ptr;
	}
}
