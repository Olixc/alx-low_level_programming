#include "lists.h"

/**
 * *insert_nodeint_at_index - inserts a new node at a given position.
 * @head: head node of a list.
 * @idx: index of the list where the new node should be adde.
 * @n: data to add to a new node created.
 *
 * Return: address of the new node.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int count;
	listint_t *ptr, *new_node;

	if ((head == NULL || *head == NULL) && idx != 0)
		return (NULL);

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;

	ptr = *head;
	count = 1;

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}

	while (ptr != NULL && count < idx)
	{
		ptr = ptr->next;
		count++;
	}

	if (ptr == NULL && count < idx)
	{
		free(new_node);
		return (NULL);
	}

	new_node->next = ptr->next;
	ptr->next = new_node;

	return (new_node);
}
