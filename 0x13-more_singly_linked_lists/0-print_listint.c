#include "lists.h"

/**
 * print_listint - funcation that count nodes
 * @h:pointer to the heder file
 *
 * Return: the number of nodes
 */

size_t print_listint(const listint_t *h)
{
	int count;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
