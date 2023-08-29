#include "lists.h"

/**
*add_nodeint_end - add new node to the end of a linked list
*@head: head of nodes
*@n: integer value n store in the node
^Return: return listint
*/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *pos;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		return (NULL);
	}

	new->n = n;
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	pos = *head;
	while (pos->next != NULL)
	{
		pos = pos->next;
	}
	pos->next = new;
	return (new);
}
