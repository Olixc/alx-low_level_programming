#include "lists.h"

/**
 * *get_nodeint_at_index - get the position index of a node.
 * @head: head of of list.
 * @index: node index.
 *
 * Return: nth node a list.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count;
	listint_t *ptr;

	count = 0;

	ptr = head;

	while (ptr != NULL)
	{
		if (count == index)
		{
			return (ptr);
		}
		count++;
		ptr = ptr->next;
	}

	return (NULL);
}
