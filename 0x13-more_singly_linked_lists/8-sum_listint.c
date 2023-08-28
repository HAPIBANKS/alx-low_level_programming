#include "lists.h"

/**
*sum_listint - sum lists
*@head: head of nodes
*Return: return int
*/

int sum_listint(listint_t *head)
{
	int sum;

	sum = 0;
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
