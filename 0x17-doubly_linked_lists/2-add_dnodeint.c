#include "lists.h"
/**
*add_dnodeint - adds a new node
*@head: head of the nodes
*@n: data to be added
*Return: returns a new list
*/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_list;
	dlistint_t *h;

	new_list = malloc(sizeof(dlistint_t));
	if (new_list == NULL)
		return (NULL);
	new_list->n = n;
	new_list->prev = NULL;
	h = *head;
	if (h != NULL)
	{
		while (h->prev != NULL)
			h = h->prev;
	}
	new_list->next = h;

	if (h != NULL)
		h->prev = new_list;
	*head = new_list;
	return (new_list);
}
