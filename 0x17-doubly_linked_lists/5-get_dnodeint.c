#include "lists.h"

/**
*get_dnodeint_at_index - get node at index
*@head: head pointer
*@index: index in the list
*Return: the node at the given index
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int j = 0;

	if (head == NULL)
		return (NULL);

	while (head->prev != NULL)
		head = head->prev;

	while (head != NULL)
	{
		if (j == index)
			break;
		head = head->next;
		j++;
	}
	return (head);
}
