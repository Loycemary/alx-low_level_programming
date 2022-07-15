#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_list - A function that frees a linked list
 * @head: The pointer to the lonked list
 * Return: Nothing
 *
 */

void free_list(list_t *head)
{
	list_t *tmp;

	while (head != NULL)
	{
		tmp = head;
		head = head->next;
		free(tmp)
	}
}
