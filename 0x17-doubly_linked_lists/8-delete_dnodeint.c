#include "lists.h"

/**
*delete_dnodeint_at_index - delete at the given index
*@head: head pointer
*@index: index
*Return: list
*/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *i;
	dlistint_t *j;
	unsigned int k = 0;

	i = *head;

	if (i != NULL)
		while (i->prev != NULL)
			i = i->prev;

	while (i != NULL)
	{
		if (k == index)
		{
			if (k == 0)
			{
				*head = i->next;
				if (*head != NULL)
					(*head)->prev = NULL;
			}
			else
			{
				j->next = i->next;
				if (i->next != NULL)
					i->next->prev = j;
			}
			free(i);
			return (1);
		}
		j = i;
		i = i->next;
		i++;
	}
	return (-1);

}
