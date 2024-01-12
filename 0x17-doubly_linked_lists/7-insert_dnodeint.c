#include "lists.h"


/**
 * insert_dnodeint_at_index - Inserts a new node at a given position.
 * @h: A double pointer to the head of the doubly linked list.
 * @idx: The index at which the new node should be inserted.
 * @n: The integer value to be stored in the new node.
 *
 * Return: If the function succeeds, the address of the new node.
 *         If it fails, returns NULL.
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *tmp = *h, *tp;

	if (idx == 0)
		return (add_dnodeint(h, n));

	for (; idx != 1; idx--)
	{
		tmp = tmp->next;
		if (tmp == NULL)
			return (NULL);
	}
	if (tmp->next == NULL)
		return (add_dnodeint_end(h, n));
	tp = malloc(sizeof(dlistint_t));
	if (tp == NULL)
		return (NULL);
	tp->n = n;
	tp->prev = tmp;
	tp->next = tmp->next;
	tp->next->prev = tp;
	tmp->next = tp;

	return (tp);
}
