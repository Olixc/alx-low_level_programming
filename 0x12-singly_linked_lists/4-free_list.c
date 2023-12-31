#include "lists.h"

/**
* free_list - free a list.
* @head: pointer to the linked list.
*
* Return: nothing.
*/
void free_list(list_t *head)
{
	while (head != NULL)
	{
		free(head->str);
		free(head);
		head = head->next;
	}
}
