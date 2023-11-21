#include "lists.h"

/**
 * sum_listint - funcation that return the sum of all list data
 * @head:pointer to the head node
 * Return:0 if empty or the sum of data
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);
	while (head != NULL)
	{
		sum = sum + head->n;
		head = head->next;
	}

	return (sum);
}
