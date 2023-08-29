#include "lists.h"

/**
*free_listp2 - frees linked list
*@head: head of nodes
*Return: always zero
*/
void free_listp2(listp_t **head)
{
	listp_t *pos;
	listp_t *current;

	if (head != NULL)
	{
		current = *head;
		while ((pos = current) != NULL)
		{
			current = current->next;
			free(pos);
		}
		*head = NULL;
	}
}

/**
*free_listint_safe - free linked list.
*@h: head of nodes
*Return: freed size
 */
size_t free_listint_safe(listint_t **h)
{
	size_t nodes = 0;
	listp_t *ptr, *new, *add;
	listint_t *current;

	ptr = NULL;
	while (*h != NULL)
	{
		new = malloc(sizeof(listp_t));

		if (new == NULL)
			exit(98);

		new->p = (void *)*h;
		new->next = ptr;
		ptr = new;

		add = ptr;

		while (add->next != NULL)
		{
			add = add->next;
			if (*h == add->p)
			{
				*h = NULL;
				free_listp2(&ptr);
				return (nodes);
			}
		}

		current = *h;
		*h = (*h)->next;
		free(current);
		nodes++;
	}

	*h = NULL;
	free_listp2(&ptr);
	return (nodes);
}
