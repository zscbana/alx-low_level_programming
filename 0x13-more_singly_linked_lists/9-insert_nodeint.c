#include "lists.h"

/**
 * insert_nodeint_at_index - Inserts a new node at a given position.
 * @head: Pointer to the head of the list.
 * @idx: Index where the new node should be added.
 * @n: Value of the new node.
 *
 * Return: Address of the new node, or NULL if it failed.
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp, *new_node = malloc(sizeof(listint_t));
	unsigned int i = 0;

	if (head == NULL || new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;
	if (!idx) /* no index then add at first*/
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}
	temp = *head;
	while (temp)
	{
		if (i == idx - 1)
		{
			new_node->next = temp->next;
			temp->next = new_node;
			return (new_node);
		}
		i++;
		temp = temp->next;
	}
	free(new_node);
	return (NULL);
}
