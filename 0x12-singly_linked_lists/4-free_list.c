#include "lists.h"

/**
*free_list - free list
*@head: first node
*Return: always void
*/
void free_list(list_t *head)
{
	list_t *pos;

	while (head != NULL)
	{
		pos = head->next;
		free(head->str);
		free(head);
		head = pos;
	}
}
