#include "lists.h"

/**
*get_nodeint_at_index - get nodes index
*@h: head of nodes
*@index: index of nodes
*Return: return listint_t
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	for (i = 0; i < index && head != NULL; i++)
	{
		head = head->next;
	}

	return (head);
}
