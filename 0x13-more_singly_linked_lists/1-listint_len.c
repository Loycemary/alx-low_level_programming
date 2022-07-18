#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * listint_len - A function that returns the number of elements in a linked list
 * @h: pointer to the first node
 * Return: number of elements in a linked list
 *
 */

size_t listint_len(const listint_t *h)
{
	size_t Godswill = 0;

	while (h != NULL)
	{
		Godswill++;
		h = h->next;
	}
	return (Godswill);
}
