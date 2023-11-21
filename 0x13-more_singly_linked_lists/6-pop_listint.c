#include "lists.h"

/**
 * pop_listint - Removes the head node of a listint_t linked list.
 * @head: Pointer to pointer to the head of the list.
 *
 * Return: The data of the popped node, or 0 if the list is empty.
 */

int pop_listint(listint_t **head)
{

	int data;
	listint_t *tmp = *head;

	if (head == NULL || *head == NULL)
		return (0);
	tmp = (*head)->next;
	data = (*head)->n;
	free(*head);
	*head = tmp;
	return (data);
}
