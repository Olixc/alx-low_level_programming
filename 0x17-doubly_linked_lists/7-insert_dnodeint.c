#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position.
 * @h: pointer to the head of the list
 * @idx: index of the list where the new node should be added. Index starts at 0
 * @n: integer to add to the list
 *
 * Return: the address of the new node, or NULL if it failed
 * if it is not possible to add the new node at index idx, do not add the new node and return NULL
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
    dlistint_t *new, *tmp;
    unsigned int i = 0;

    if (!h)
        return (NULL);
    if (idx == 0)
        return (add_dnodeint(h, n));
    tmp = *h;
    while (tmp)
    {
        if (i == idx - 1)
        {
            if (!tmp->next)
                return (add_dnodeint_end(h, n));
            new = malloc(sizeof(dlistint_t));
            if (!new)
                return (NULL);
            new->n = n;
            new->next = tmp->next;
            new->prev = tmp;
            tmp->next->prev = new;
            tmp->next = new;
            return (new);
        }
        i++;
        tmp = tmp->next;
    }
    return (NULL);
}
