#include "lists.h"

/**
 * print_list - print number of lists
 *
 * @h:pointer to header
 * Return: number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		printf("[%u] %s\n", h->len, h->str ? h->str : "(nil)");
		h = h->next;
		count++;
	}

	return count;
}
