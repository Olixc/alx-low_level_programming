#include "lists.h"

/**
 * *add_nodeint_end - add node to the end of a list.
 * @head: head node list.
 * @n: data to store in the new node.
 *
 * Return: new_node.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node, *ptr;

	if (head == NULL)
		return (NULL);

	new_node = (listint_t *)malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
		*head = new_node;
	else
	{
		ptr = *head;

		while (ptr->next != NULL)
		{
			ptr = ptr->next;
		}

		ptr->next = new_node;
	}

	return (new_node);
}
