#include "lists.h"

/**
*free_listp - free linked list
*@head: head of nodes
*Return: no return.
*/
void free_listp(listp_t **head)
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
*print_listint_safe - print6 a linked list
*@head: head of a nodes
*Return: return size_t data
*/
size_t print_listint_safe(const listint_t *head)
{
	size_t nodes = 0;
	listp_t *ptr, *new, *add;

	ptr = NULL;
	while (head != NULL)
	{
		new = malloc(sizeof(listp_t));

		if (new == NULL)
			exit(98);

		new->p = (void *)head;
		new->next = ptr;
		ptr = new;

		add = ptr;

		while (add->next != NULL)
		{
			add = add->next;
			if (head == add->p)
			{
				printf("-> [%p] %d\n", (void *)head, head->n);
				free_listp(&ptr);
				return (nodes);
			}
		}

		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
		nodes++;
	}

	free_listp(&ptr);
	return (nodes);
}
