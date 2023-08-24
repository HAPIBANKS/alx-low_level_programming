#include "lists.h"
/**
*list_len - length of a linked list
*@h: head of the list
*Return: always zero
*/
size_t list_len(const list_t *h)
{
	size_t size;

	size = 0;
	while (h != NULL)
	{
		size++;
		h = h->next;
	}
	return (size);
}
