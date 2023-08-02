#include "lists.h"

/**
 * sum_listint - get the total sum data of a list.
 * @head: head of a list.
 *
 * Return: total sum of a list.
 */
int sum_listint(listint_t *head)
{
	listint_t *ptr;
	int sum;

	sum = 0;

	if (head == NULL)
		return (0);

	ptr = head;

	while (ptr != NULL)
	{
		sum += ptr->n;
		ptr = ptr->next;
	}

	return (sum);
}
