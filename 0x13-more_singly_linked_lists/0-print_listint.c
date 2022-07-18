#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_listint - A function that prints all the elements of a linked list
 * @h: pointer to first node
 * Return: the number of nodes
 *
 */

size_t print_listint(const listint_t *h)
{
	size_t Godswill = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		Godswill++;
		h = h->next;
	}

	return (Godswill);
}
