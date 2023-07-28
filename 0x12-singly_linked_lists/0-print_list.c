#include "lists.h"

/**
* print_list - print the elements in the list.
* @h: pointer to the linked list.
*
* Return: Total length of nodes.
*/
size_t print_list(const list_t *h)
{
	size_t node_count = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[%d] (nil)\n", 0);
		else
			printf("[%d] %s\n", h->len, h->str);
		node_count++;
		h = h->next;
	}
	return (node_count);
}
