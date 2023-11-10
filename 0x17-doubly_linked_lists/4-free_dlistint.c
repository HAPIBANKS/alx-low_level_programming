#include "lists.h"

/**
*free_dlistint - free dlistint_t list
*@head: head pointer
*Return: freed list(void)
*/
void free_dlistint(dlistint_t *head)
{
	dlistint_t *data;

	if (head != NULL)
		while (head->prev != NULL)
			head = head->prev;

	while ((data = head) != NULL)
	{
		head = head->next;
		free (data);
	}
}
