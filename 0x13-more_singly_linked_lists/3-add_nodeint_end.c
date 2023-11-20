#include "lists.h"

/**
 * add_nodeint_end -  a function that adds a new node at the end
 * @head:pointer to pointer to head
 * @n:intger i
 *
 * Return: last node
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node, *tmp;

	tmp = head;
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;
	while (tmp->next != NULL)
	{
		tmp = tmp->next;
	}
	tmp->next = new_node;

	return (new_node);
}
