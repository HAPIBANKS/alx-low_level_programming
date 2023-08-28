#include "lists.h"

/**
 * free_listint - free linked list
 * @head: head of nodes.
 * Return: always void.
 */
void free_listint(listint_t *head)
{
	listint_t *pos;

	while ((pos = head) != NULL)
	{
		head = head->next;
		free(pos);
	}
}
