#include "lists.h"

/**
 * add_dnodeint_end - a function that adds a new node at the end
 * of a dlistint_t list.
 * @head: double pointer to head node
 * @n: intger data of the node
 * Return: last node
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *tmp = malloc(sizeof(dlistint_t)), *tp;

	if (!head || !tmp)
		return (tmp ? free(tmp), NULL : NULL);
	tmp->n = n;
	tmp->next = NULL;
	if (!*head)
	{
		tmp->prev = NULL;
		*head = tmp;
	}
	else
	{
		tp = *head;
		while (tp->next != NULL)
		{
			tp = tp->next;
		}
		tp->next = tmp;
		tmp->prev = tp;
	}
	return (tmp);
}
