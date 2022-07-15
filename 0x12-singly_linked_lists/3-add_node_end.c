#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _strlen - Function to return len of a string.
 * @str: str input
 * Return: Number of characters in string.
 */
int _strlen(const char *str)
{
	int i;

	if (str == NULL)
		return (0);
	for (i = 0; str[i] != '\0'; i++)
		;
	return (i);
}
/**
 * add_node_end - function that adds a new node at the end of a linked list
 * @head: Pointer to the first node
 * @str: string to assign the new node
 * Return:  the address of the new element, or NULL if it failed
 *
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *tmp;
	list_t *new_node;

	tmp = *head;
	if (head == NULL)
		return (NULL);
	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);
	if (*head == NULL)
	{
		*head = new_node;
		return (*head);
	}
	while (tmp->next != NULL)
	tmp = tmp->next;
	tmp->next = new_node;
	new_node->str = strdup(str);
	new_node->len = _strlen(str);
	new_node->next = NULL;
	return (*head);
}
