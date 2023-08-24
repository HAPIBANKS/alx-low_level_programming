#include "lists.h"
/**
*print_list - print all the element of a list
*@h: head of the linked list
*Return: always zero
*/
size_t print_list(const list_t *h)
{
	size_t size;

	size = 0;
	while (h != NULL)
	{
		size++;
		if (h->str == NULL)
		{
			printf("[%d] (nil)\n", 0);
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);	
		}
		h = h->next;
	}
	return (size);
}
