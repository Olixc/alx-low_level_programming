#include "lists.h"
/**
* *add_node - add a new node at the beginning of a list.
* @head: pointer to head of linked list.
* @str: new node data.
*
* Return: address of the new element, or NULL if it failed
*/
list_t *add_node(list_t **head, const char *str)
{

	list_t *new_node;

	if (str == NULL)
		return (NULL);

	new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);

	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->len = strlen(str);

	if (*head == NULL)
	{
		new_node->next = NULL;
	}
	else
	{
		new_node->next = *head;
	}

	*head = new_node;
	return (new_node);

}
