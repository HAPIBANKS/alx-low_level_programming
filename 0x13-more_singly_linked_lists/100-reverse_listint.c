#include "lists.h"

/**
*reverse_listint - reverse a linked list
*@head: head of nodes
*Return: return listint data
*/

listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev, *next;

	prev = NULL;
	while (*head != NULL)
	{
		next = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = next;
	}
	*head = prev;
	return (*head);

}
