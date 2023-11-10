#include "lists.h"

/**
*add_dnodeint_end - add new node to the end of the list
*@head: head pointer
*@n: data
*Return: a new extended list
*/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *h;
	dlistint_t *new_list;

	new_list = malloc(sizeof(dlistint_t))
	if (new_list == NULL)
		return (NULL);

	new_list->n = n;
	new_list->next = NULL;
	h = *head;
	if (h != NULL)
	{
		while (h->next != NULL)
			h = h->next;
		h->next = new_list;
	}
	else
	{
		*head = new_list;
	}
	new_list->prev = h;
	return (new_list);
}
