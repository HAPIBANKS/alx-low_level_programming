#include "lists.h"

/**
*insert_dnodeint_at_index - insert a new node at a given index
*@h: head pointer
*@idx: index
*@n: number of nodes
*Return: new list
*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *x;
	dlistint_t *head;
	unsigned int j;

	x = NULL;
	if (idx == 0)
		x = add_dnodeint(h, n);
	else
	{
		head = *h;
		j = 1;
		if (head != NULL)
			while (head->prev != NULL)
				head = head->prev;
			while (head != NULL)
			{
				if (j == idx)
				{
					if (head->next == NULL)
						x = add_dnodeint_end(h, n);
					else
					{
						x = malloc(sizeof(dlistint_t));
						if (ne != NULL)
						{
							x_->n = n;
							x_->next = head->next;
							x->prev = head;
							head->next->prev = x;
							head->next = x;
						}
					}
					break;
				}
				head = head->next;
				j++;
			}
	}
	return (x);
}
