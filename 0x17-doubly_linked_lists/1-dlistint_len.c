#include "lists.h"

/**
 * dlistint_len - a function that returns the number of elements
 * in a linked
 * @h: Pointer to the head of the list.
 * Return: The number of nodes.
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		h = h->next;
		i++;
	}
	return (i);
}
