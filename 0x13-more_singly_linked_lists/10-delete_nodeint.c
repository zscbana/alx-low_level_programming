#include "lists.h"

/**
 * delete_nodeint_at_index - a function that deletes the node at index
 * @index:index of the node that should be deleted
 * @head:pointer to pointer to head
 * Return: -1 fail and 1 on success
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current, *pervious;
	unsigned int i = 0;

	if (!head || !*head)
		return (-1);

	if (!index)
	{
		current = *head;
		*head = (*head)->next;
		free(current);
		return (1);
	}
	current = *head;
	while (current)
	{
		if (i == index)
		{
			pervious->next = current->next;
			free(current);
			return (1);
		}
		i++;
		pervious = current;
		current = current->next;
	}
	return (-1);
}
