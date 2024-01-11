#include "lists.h"

/**
 * add_dnodeint -a function that adds a new node at the beginning
 * of a dlistint_t list.
 * @head: double pointer to head node
 * @n: intger data of the node
 * Return: first node
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *tmp = malloc(sizeof(dlistint_t));

	if (!head || !tmp)
		return (tmp ? free(tmp), NULL : NULL);
	tmp->prev = NULL;
	tmp->n = n;
	if (!*head)
	{
		*head = tmp;
		tmp->next = NULL;
	}
	else
	{
		tmp->next = *head;
		(*head)->prev = tmp;
		*head = tmp;
	}
	return (tmp);
}
