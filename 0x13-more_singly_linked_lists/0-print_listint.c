#include "lists.h"

/**
 * print_listint - print all the elemtns of a list.
 * @h:head node.
 *
 * Return: number of nodes.
 */
size_t print_listint(const listint_t *h)
{
	/* variable declaration */
	int n_nodes;
	listint_t const *ptr;

	/* check if no node exist */
	if (h == NULL)
		return (0);

	n_nodes = 0;
	ptr = h;

	while (ptr != NULL)
	{
		printf("%d\n", ptr->n);
		ptr = ptr->next;
		n_nodes++;
	}

	return (n_nodes);
}
