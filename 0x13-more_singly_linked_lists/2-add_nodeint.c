#include "lists.h"

/**
*add_nodeint - add node at the beginning of a list
*@head: head of node of a linked list
*@n: integer value n store in the node
*Return: return int
*/

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}
