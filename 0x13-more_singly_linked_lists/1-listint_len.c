#include "lists.h"

/**
 * listint_len - get the number of elements in a linked list.
 * @h: head of node lists.
 *
 * Return: return number of elements in a linked list.
 */
size_t listint_len(const listint_t *h)
{
	size_t n_el;
	listint_t const *ptr;

	n_el = 0;

	if (h == NULL)
		return (0);

	ptr = h;

	while (ptr != NULL)
	{
		ptr = ptr->next;
		n_el++;
	}

	return (n_el);
}
