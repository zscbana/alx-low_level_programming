#include "lists.h"

/**
 * add_node_end - a function that adds a new node
 * at the end of a list_t list.
 *
 * @head: addres to pointer to headnode
 * @str: str filed of node
 *
 * Return: size of list
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_tail = malloc(sizeof(list_t));
	list_t *node = *head;

	if (!head || !new_tail)
		return (NULL);
	if (str)
	{
		new_tail->str = strdup(str);
		if (!new_tail->str)
		{
			free(new_tail);
			return (NULL);
		}
		new_tail->len = _strlen(new_tail->str);
	}
	if (node)
	{
		while (node->next)
			node = node->next;
		node->next = new_tail;
	}
	else
		*head = new_tail;
	return (new_tail);
}
