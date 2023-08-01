#include "lists.h"

/**
 * *add_nodeint - add node to the beginning of a list.
 * @head: head pointer to node list.
 * @n: data to add to a newly created node.
 *
 * Return: updated list.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node, *ptr;

	new_node = (listint_t *)malloc(sizeof(listint_t));
	new_node->n = n;
	new_node->next = NULL;
	ptr = *head;

	if (*head == NULL)
		*head = new_node;
	else
	{
		new_node->next = ptr;
		ptr = new_node;
	}

	*head = new_node;

	return (*head);
}
