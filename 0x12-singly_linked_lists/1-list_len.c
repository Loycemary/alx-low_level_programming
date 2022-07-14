#include "lists.h"
#include <stdio.h>

/**
 * list_len - function that returns number of elements in a linked list
 * @h: pointer to the first node
 * Return: total numbers of nodes in the liked list.
 *
 */

size_t list_len(const list_t *h)
{
	int i;
	
	if (h == NULL)
		return (0);
	for (i = 1; h->next != NULL; i++)
	
		h = h->next;
	return (i);
}
