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
	listint_t *new_node;

	if (head == NULL)
		return (NULL);

	new_node = (listint_t *)malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
