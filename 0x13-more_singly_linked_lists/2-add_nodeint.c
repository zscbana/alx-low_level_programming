#include "lists.h"

/**
 * add_nodeint -  a function that adds a new node at the beginning
 * @head:pointer to pointer to head
 * @n:intger i
 *
 * Return: first node
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *ptr;

	ptr = malloc(sizeof(listint_t));
	if (ptr == NULL)
		return (NULL);

	ptr->n = n;
	ptr->next = *head;
	*head = ptr;

	return (ptr);
}
