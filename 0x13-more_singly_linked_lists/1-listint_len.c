#include "lists.h"

/**
*listint_len - length of a linked list
*@h: head of nodes
*Return: return size_t
*/
size_t listint_len(const listint_t *h)
{
	size_t inodes = 0;

	while (h != NULL)
	{
		h = h->next;
		inodes++;
	}
	return (inodes);
}
