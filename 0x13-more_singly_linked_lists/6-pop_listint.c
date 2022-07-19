#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * pop_listint - function that deletes the head node of
 * a linked list
 * @head: pointer to the first node
 * Return: the head node's data
 *
 */
int pop_listint(listint_t **head)
{
	int hnode;
	listint_t *h;
	listint_t *curr;

	if (*head == NULL)
		return (0);

	curr = *head;

	hnode = curr->n;

	h = curr->next;
	free(curr);

	*head = h;

	return (hnode);
}
