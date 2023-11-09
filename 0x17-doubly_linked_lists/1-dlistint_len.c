#include "lists.h"

/**
*dlistint_len - a funtion that returns the number of element in alinked list
*@h: head pointer to the nodes
*Return: the number of element in the list
*/
size_t dlistint_len(const dlistint_t *h)
{
	int c = 0;

	if (h == NULL)
		return (c);

	while (h->prev != NULL)
		h = h->prev;

	while (h != NULL)
	{
		c++;
		h = h->next;
	}
	return (c);
}
