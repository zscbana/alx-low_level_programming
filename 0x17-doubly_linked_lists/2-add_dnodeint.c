#include "lists.h"

/**
 * 
*/

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
    dlistint_t *tmp = malloc(sizeof(dlistint_t));
    if (!head || !tmp)
    return (tmp ? free(tmp),NULL : NULL);
    tmp->prev = NULL;
    tmp->next = head;
    tmp->n = n;
    head = tmp;
    return (head);
}
