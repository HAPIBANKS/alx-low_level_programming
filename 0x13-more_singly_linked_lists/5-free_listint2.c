#include "lists.h"

/**
 * free_listint2 - free linked list
 * @head: head of nodes
 * Return: return void
 */
void free_listint2(listint_t **head)
{
	listint_t *pos;
	listint_t *sop;

	if (head != NULL)
	{
		sop = *head;
		while ((pos = sop) != NULL)
		{
			sop = sop->next;
			free(pos);
		}
		*head = NULL;
	}
}
