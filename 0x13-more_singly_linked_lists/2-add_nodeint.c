#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * add_nodeint - function that adds a node at the begining
 * @head: pointer to a pointer that points to the first node
 * @n: n element
 * Return: address of the new element, or NULL if it failed
 *
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *temp;

	temp = malloc(sizeof(listint_t));

		if (temp == NULL)
			return (NULL);
	temp->n = n;
	temp->next = *head;
	*head = temp;

	return (*head);

}
