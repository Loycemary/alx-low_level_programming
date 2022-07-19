#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_listint2 - function that frees a list and sets
 * the head to NULL
 * @head: pointer to the node
 * Return: NULL
 *
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;
	listint_t *curr;

	if (head != NULL)
	{
		curr = *head;
		while ((temp = curr) != NULL)
		{ 
			curr = curr->next;
			free(temp);
		}
		*head = NULL;
	}
}
