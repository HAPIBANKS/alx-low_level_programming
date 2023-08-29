#include "lists.h"

/**
 *pop_listint - delete the head node of a list
 *@head: head node
 *Return: return head node data
 */

int pop_listint(listint_t **head)
{
	listint_t *pos;
	int n;

	pos = *head;
	n = 0;
	if (*head == NULL)
	{
		return (n);
	}
	*head = pos->next;
	n = pos->n;
	free(pos);
	return (n);
}
