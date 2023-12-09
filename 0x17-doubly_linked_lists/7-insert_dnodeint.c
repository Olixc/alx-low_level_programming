#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index index of a
 * dlistint_t linked list.
 * @head: pointer to the head of the list
 * @index: index of the node that should be deleted, starting at 0
 *
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
    dlistint_t *tmp = *head;
    unsigned int i = 0;

    if (!*head)
        return (-1);
    if (index == 0)
    {
        *head = tmp->next;
        if (tmp->next)
            tmp->next->prev = NULL;
        free(tmp);
        return (1);
    }
    while (tmp)
    {
        if (i == index)
        {
            tmp->prev->next = tmp->next;
            if (tmp->next)
                tmp->next->prev = tmp->prev;
            free(tmp);
            return (1);
        }
        i++;
        tmp = tmp->next;
    }
    return (-1);
}
