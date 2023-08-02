#include "lists.h"


/**
 * print_listint_safe - print node data address of the list.
 * @head: head pointer to list.
 *
 * Return:  the number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *ptr, *cur;
	size_t node_count;

	if (head == NULL) /* empty list */
		exit(98);

	node_count = 0;
	ptr = head;

	while (ptr != NULL)
	{
		cur = ptr;
		ptr = ptr->next;
		node_count++;
		printf("[%p] %d\n", (void *)cur, cur->n);

		if (cur < ptr)
		{
			printf("-> [%p] %d\n", (void *)ptr, ptr->n);
			break;
		}
	}
	return (node_count);
}
